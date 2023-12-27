/******************************************************************************
* Copyright (c) 2018(-2023) STMicroelectronics.
* All rights reserved.
*
* This file is part of the TouchGFX 4.22.1 distribution.
*
* This software is licensed under terms that can be found in the LICENSE file in
* the root directory of this software component.
* If no LICENSE file comes with this software, it is provided AS-IS.
*
*******************************************************************************/

/**
 * @file touchgfx/widgets/canvas/PainterRGB888L8Bitmap.hpp
 *
 * Declares the touchgfx::PainterRGB888L8Bitmap class.
 */
#ifndef TOUCHGFX_PAINTERRGB888L8BITMAP_HPP
#define TOUCHGFX_PAINTERRGB888L8BITMAP_HPP

#include <touchgfx/Bitmap.hpp>
#include <touchgfx/hal/Types.hpp>
#include <touchgfx/widgets/canvas/AbstractPainterBitmap.hpp>
#include <touchgfx/widgets/canvas/AbstractPainterRGB888.hpp>

namespace touchgfx
{
/**
 * PainterRGB888L8Bitmap will take the color for a given point in the shape from a
 * bitmap. Please be aware, the the bitmap is used by the CanvasWidgetRenderer (not
 * Shape), so any rotation you might specify for a Canvas Widget (e.g. Shape) is not
 * applied to the bitmap as CWR is not aware of this rotation.
 *
 * @see AbstractPainter
 */
class PainterRGB888L8Bitmap : public AbstractPainterRGB888, public AbstractPainterBitmap
{
public:
    /**
     * Constructor.
     *
     * @param  bmp (Optional) The bitmap to use in the painter.
     */
    PainterRGB888L8Bitmap(const Bitmap& bmp = Bitmap(BITMAP_INVALID))
        : AbstractPainterRGB888(), AbstractPainterBitmap(bmp)
    {
    }

    virtual void setBitmap(const Bitmap& bmp);

    virtual bool setup(const Rect& widgetRect) const;

    virtual void paint(uint8_t* destination, int16_t offset, int16_t widgetX, int16_t widgetY, int16_t count, uint8_t alpha) const;

    virtual void tearDown() const;

    virtual HAL::RenderingMethod getRenderingMethod() const
    {
        return HAL::getInstance()->getDMAType() == DMA_TYPE_CHROMART ? HAL::HARDWARE : HAL::SOFTWARE;
    }

protected:
    const uint8_t* bitmapCLUT;   ///< Pointer to the CLUT
    Bitmap::ClutFormat l8format; ///< The l8format read from the bitmap extra data
};

} // namespace touchgfx

#endif // TOUCHGFX_PAINTERRGB888L8BITMAP_HPP
