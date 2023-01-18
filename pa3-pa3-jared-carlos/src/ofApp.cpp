#include "ofApp.hpp"
#include "SnowFlake.hpp"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetEscapeQuitsApp(false);
    fullscreen = 0;
    // Code
    for (int i = 0; i < 16; i++)
        colors.push_back(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));
    // Code
    circleFractal = new CircleFractal(0.31 * ofGetHeight());
    treeFractal = new TreeFractal();
    sierpinskiFractal = new SierpinskiFractal(0.88 * ofGetHeight());
    barnsleyFernFractal = new BarnsleyFernFractal();
    snowFlake = new SnowFlake();

    fractals = {circleFractal, treeFractal, sierpinskiFractal, barnsleyFernFractal, snowFlake};
}

//--------------------------------------------------------------
void ofApp::update()
// Code
{

    if (Animation)
    {
        animation_Counter++;
        if (animation_Counter == 30)
        {
            animation_Counter = 0;
            if (levels == 10)
                increases_Levels = false;
            if (levels == 0)
                increases_Levels = true;
            if (increases_Levels)
                levels++;
            if (!increases_Levels)
                levels--;
            for (unsigned int i = 0; i < fractals.size(); i++)
                dynamic_cast<AbstractFractal *>(fractals[i])->setLevels(levels);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackgroundGradient(ofColor(65), ofColor(0), OF_GRADIENT_BAR);
    fractals[index]->draw();
    // Code
    ofDrawBitmapString(fractals[index]->getName(), 20, 20);
    ofNoFill();
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

    if (key >= '1' && key <= '5')
        index = key - 49;
    else if (key == OF_KEY_F11)
        ofSetFullscreen(fullscreen++ % 2 == 0);
    else if (key == OF_KEY_ESC)
        ofSetFullscreen(false);
    // Code
    else if (key == OF_KEY_LEFT && levels > 0)
    {
        levels--;
        // Code
        for (unsigned int i = 0; i < fractals.size(); i++)
            dynamic_cast<AbstractFractal *>(fractals[i])->setLevels(levels);
    }
    else if (key == OF_KEY_RIGHT && levels < 10)
    {
        levels++;
        // Code
        for (unsigned int i = 0; i < fractals.size(); i++)
            dynamic_cast<AbstractFractal *>(fractals[i])->setLevels(levels);
    }
    // Code
    else if (key == ' ')

    {
        Animation = !Animation;
        if (Animation)
        {
            levels = 1;
            for (unsigned int i = 0; i < fractals.size(); i++)
                dynamic_cast<AbstractFractal *>(fractals[i])->setLevels(levels);
        }
        else
        {
            animation_Counter = 0;
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}