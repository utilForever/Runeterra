// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Games/Game.hpp>
#include <Runeterra/Games/GameManager.hpp>

namespace Runeterra
{
Game::Game(const GameConfig& config) : m_gameConfig{ config }
{
}

void Game::BeginShuffle()
{
    // Set next step
    nextStep = Step::BeginDraw;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::BeginDraw()
{
    // Set next step
    nextStep = Step::BeginMulligan;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::BeginMulligan()
{
    // Do nothing
}

void Game::MainBegin()
{
    // Set next step
    nextStep = Step::MainReady;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainReady()
{
    // Set next step
    nextStep = Step::MainStartTriggers;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainStartTriggers()
{
    // Set next step
    nextStep = Step::MainResource;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainResource()
{
    // Set next step
    nextStep = Step::MainDraw;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainDraw()
{
    // Set next step
    nextStep = Step::MainStart;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainStart()
{
    // Set next step
    nextStep = Step::MainAction;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainAction()
{
    // Do nothing
}

void Game::MainEnd()
{
    // Set next step
    nextStep = Step::MainCleanUp;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainCleanUp()
{
    // Set next step
    nextStep = Step::MainNext;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::MainNext()
{
    // Set next step
    nextStep = Step::MainReady;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::FinalWrapUp()
{
    // Set next step
    nextStep = Step::FinalGameOver;
    if (m_gameConfig.autoRun)
    {
        GameManager::ProcessNextStep(*this, nextStep);
    }
}

void Game::FinalGameOver()
{
    // Do nothing
}
}  // namespace Runeterra