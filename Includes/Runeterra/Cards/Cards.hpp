// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARDS_HPP
#define RUNETERRA_CARDS_HPP

#include <Runeterra/Cards/Card.hpp>

#include <memory>
#include <vector>

namespace Runeterra
{
//!
//! \brief Cards class.
//!
//! This class stores a list of cards and provides several search methods.
//!
class Cards
{
 public:
    //! Deleted copy constructor.
    Cards(const Cards& cards) = delete;

    //! Deleted move constructor.
    Cards(Cards&& cards) = delete;

    //! Deleted copy assignment operator.
    Cards& operator=(const Cards& cards) = delete;

    //! Deleted move assignment operator.
    Cards& operator=(Cards&& cards) = delete;

    //! Returns an instance of Cards class.
    //! \return An instance of Cards class.
    static Cards& GetInstance();

    //! Returns a list of all cards.
    //! \return A list of all cards.
    [[nodiscard]] const std::vector<std::unique_ptr<Card>>& GetAllCards() const;

 private:
    //! Loads card data.
    Cards();

    //! Releases card data.
    ~Cards();

    static Cards m_instance;

    std::vector<std::unique_ptr<Card>> m_cards;
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARDS_HPP