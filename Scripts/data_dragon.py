from typing import Optional
from urllib.request import urlopen
from io import BytesIO
from zipfile import ZipFile
from sys import argv
from re import compile


def download_extract(
        url: str,
        destination_path: str,
        target_file_regex: Optional[str] = None,
        target_file_name: Optional[str] = None) -> None:

    print(f'Downloading files from {url}')

    with urlopen(url) as response:
        with ZipFile(BytesIO(response.read())) as zip:

            if target_file_regex is None:
                print(f'Extracting all files from {url} to {destination_path}')
                zip.extractall(destination_path)

            else:
                pattern = compile(target_file_regex)
                for name in zip.namelist():
                    searched = pattern.search(name)
                    if searched:
                        if target_file_name is None:
                            start = searched.regs[0][0]
                            end = searched.regs[0][1]
                            target = name[start:end]
                        else:
                            target = target_file_name

                        print(
                            f'Extracting {name} from {url} to {destination_path}{target}')

                        info = zip.getinfo(name)
                        info.filename = target
                        zip.extract(info, destination_path)


# script usage example python data_dragon.py core set1 set3 ->
# Download: globals-en_us.json, set1-en_us.json and set3-en_us.json
if __name__ == '__main__':

    args = argv[1:]

    for arg in args:
        if arg == 'core':
            url = 'https://dd.b.pvp.net/latest/core-en_us.zip'
            download_extract(url, '../Resources/', r'globals-en_us\.json')
        if 'set' in arg:
            url = f'https://dd.b.pvp.net/latest/{arg}-lite-en_us.zip'
            download_extract(
                url, '../Resources/', fr'{arg}-en_us\.json')
