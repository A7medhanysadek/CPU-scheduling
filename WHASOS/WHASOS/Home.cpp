#include "Home.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    WHASOS::Home frm;
    Application::Run(% frm);
    WHASOS::Home::approach = "";
}