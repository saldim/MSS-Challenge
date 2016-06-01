#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

/**
 * Точка входа в приложение
 * Начальная иницализация графического интерфейса
 * Автор: Ардесов Вячеслав
 */
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MSS::MainForm form;
	Application::Run(%form);
}