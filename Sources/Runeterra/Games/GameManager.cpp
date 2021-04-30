// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Games/Game.hpp>
#include <Runeterra/Games/GameManager.hpp>

namespace Runeterra
{
void GameManager::ProcessNextStep(Game& game, Step step)
{
    switch (step)
    {
        case Step::BeginFirst:
            game.step = step;
            game.BeginFirst();
            break;
        case Step::BeginShuffle:
            game.step = step;
            game.BeginShuffle();
            break;
        case Step::BeginDraw:
            game.step = step;
            game.BeginDraw();
            break;
        case Step::BeginMulligan:
            game.step = step;
            game.BeginMulligan();
            break;
        case Step::MainBegin:
            game.step = step;
            game.MainBegin();
            break;
        case Step::MainReady:
            game.step = step;
            game.MainReady();
            break;
        case Step::MainStartTriggers:
            game.step = step;
            game.MainStartTriggers();
            break;
        case Step::MainResource:
            game.step = step;
            game.MainResource();
            break;
        case Step::MainDraw:
            game.step = step;
            game.MainDraw();
            break;
        case Step::MainStart:
            game.step = step;
            game.MainStart();
            break;
        case Step::MainAction:
            game.step = step;
            game.MainAction();
            break;
        case Step::MainEnd:
            game.step = step;
            game.MainEnd();
            break;
        case Step::MainCleanUp:
            game.step = step;
            game.MainCleanUp();
            break;
        case Step::MainNext:
            game.step = step;
            game.MainNext();
            break;
        case Step::FinalWrapUp:
            game.FinalWrapUp();
            break;
        case Step::FinalGameOver:
            game.FinalGameOver();
            break;
    }
}
}  // namespace Runeterra