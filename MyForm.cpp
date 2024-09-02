#include "MyForm.h"

using namespace WinForm;

[STAThreadAttribute] 
int main() {

	Application::Run(gcnew MyForm());

	return 0;
}

