/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 120, 160);
    box1.setColor(touchgfx::Color::getColorFromRGB(2, 204, 9));
    add(box1);

    box2.setPosition(120, 0, 120, 160);
    box2.setColor(touchgfx::Color::getColorFromRGB(2, 204, 9));
    add(box2);

    box3.setPosition(0, 160, 120, 160);
    box3.setColor(touchgfx::Color::getColorFromRGB(2, 204, 9));
    add(box3);

    box4.setPosition(120, 160, 120, 160);
    box4.setColor(touchgfx::Color::getColorFromRGB(2, 204, 9));
    add(box4);

    door_lock_1.setXY(-15, 20);
    door_lock_1.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_DOOR_ID));
    door_lock_1.setAction(buttonCallback);
    add(door_lock_1);

    door_lock_2.setXY(105, 20);
    door_lock_2.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_DOOR_ID));
    door_lock_2.setAction(buttonCallback);
    add(door_lock_2);

    door_lock_3.setXY(-15, 180);
    door_lock_3.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_DOOR_ID));
    door_lock_3.setAction(buttonCallback);
    add(door_lock_3);

    door_lock_4.setXY(105, 180);
    door_lock_4.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_DOOR_ID));
    door_lock_4.setAction(buttonCallback);
    add(door_lock_4);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &door_lock_1)
    {
        //door1
        //When door_lock_1 clicked call virtual function
        //Call function1
        function1();
    }
    if (&src == &door_lock_2)
    {
        //door2
        //When door_lock_2 clicked call virtual function
        //Call function2
        function2();
    }
    if (&src == &door_lock_3)
    {
        //door3
        //When door_lock_3 clicked call virtual function
        //Call function3
        function3();
    }
    if (&src == &door_lock_4)
    {
        //door4
        //When door_lock_4 clicked call virtual function
        //Call function4
        function4();
    }
}