﻿
#include "pch.h"
#include "MainPage.xaml.h"

using namespace SchemaApp;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

//void Button_Click(Object^ sender, EventArgs^ e)
//{
//
//}

MainPage::MainPage()
{
	InitializeComponent();
	Button^ xButton = ref new Button();
	xButton->Content = "Hello";
	MainGrid->Children->Append(xButton);
}

