
#include "main.h"

StereoParams g_stereoParams;

int main(int argc, const char** argv)
{
    Vizzer callback;
    ml::ApplicationWin32 app(NULL, 2000, 1000, "Vizzer", ml::GraphicsDeviceTypeD3D11, callback);
    app.messageLoop();

    return 0;
}
