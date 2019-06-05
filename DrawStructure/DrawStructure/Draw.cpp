#include "Draw.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^ > ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DrawStructure::Draw forma;
	Application::Run(% forma);
	return 0;
}
