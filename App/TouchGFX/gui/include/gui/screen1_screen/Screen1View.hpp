#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void function1()
    {
    	if (box1.getColor()==0x02CC09){
    		box1.setColor(0xFF0000);
    		box1.invalidate();
    	}else{
    		box1.setColor(0x02CC09);
    		box1.invalidate();
    	}
    }
    virtual void function2()
    {
    	if (box2.getColor()==0x02CC09){
    	    box2.setColor(0xFF0000);
    	    box2.invalidate();}
    	else{
    	    box2.setColor(0x02CC09);
    	    box2.invalidate();
    	}
    }
    virtual void function3()
    {
    	if (box3.getColor()==0x02CC09){
    	    box3.setColor(0xFF0000);
    	    box3.invalidate();}
    	else{
    	    box3.setColor(0x02CC09);
    	    box3.invalidate();
    	 }
    }
    virtual void function4()
    {
    	if (box4.getColor()==0x02CC09){
    	    box4.setColor(0xFF0000);
    	    box4.invalidate();}
    	else{
    	    box4.setColor(0x02CC09);
    	    box4.invalidate();
    	  }
    }
protected:
};

#endif // SCREEN1VIEW_HPP
