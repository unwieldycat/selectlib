/**
 * @file view.hpp
 * @brief Base view class
 * @ingroup abstract-view
 *
 * Abstract view class for other views to derrive. Provides basic functions and
 * structure.
 */

#pragma once
#include "api.h"
#include <string>

namespace rd {

/**
 * @brief Base view class
 * @ingroup abstract-view
 */
class View {
  private:
	std::string name;
	lv_obj_t *obj;

  public:
	/// @addtogroup abstract-view
	/// @{

	/// @name Abstract View Functions

	/**
	 * @brief View constructor
	 *
	 * @param name Name to display in the UI
	 */
	View(std::string name);
	~View();

	/**
	 * @brief Get the view's lvgl object
	 *
	 * @return lv_obj_t*
	 */
	lv_obj_t *get_obj();

	/**
	 * @brief Get the view name
	 *
	 * @return std::string
	 */
	std::string get_name();

	/**
	 * @brief Set this view to the active view
	 */
	void focus();

	// @}
};

} // namespace rd