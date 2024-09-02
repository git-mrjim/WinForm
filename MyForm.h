#pragma once
#include "MainForm.h"
#include "ProgramData.h";

namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnSignup;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnSignup = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->AllowDrop = true;
			this->textBoxUsername->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxUsername->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->textBoxUsername->BackColor = System::Drawing::Color::Silver;
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(86, 87);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxUsername->Multiline = true;
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(328, 30);
			this->textBoxUsername->TabIndex = 3;
			this->textBoxUsername->Text = L"admin01";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->AllowDrop = true;
			this->textBoxPassword->BackColor = System::Drawing::Color::Silver;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(86, 178);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxPassword->Multiline = true;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(328, 30);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->Text = L"admin123";
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::FloralWhite;
			this->btnLogin->Location = System::Drawing::Point(86, 235);
			this->btnLogin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(161, 43);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseMnemonic = false;
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// btnSignup
			// 
			this->btnSignup->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnSignup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSignup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignup->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignup->ForeColor = System::Drawing::Color::FloralWhite;
			this->btnSignup->Location = System::Drawing::Point(255, 235);
			this->btnSignup->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSignup->Name = L"btnSignup";
			this->btnSignup->Size = System::Drawing::Size(161, 43);
			this->btnSignup->TabIndex = 5;
			this->btnSignup->Text = L"Signup";
			this->btnSignup->UseMnemonic = false;
			this->btnSignup->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 353);
			this->Controls->Add(this->btnSignup);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxUsername);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = textBoxUsername->Text;
		String^ password = textBoxPassword->Text;
		bool nextPage = false;
		
		if (username == "admin01" && password == "admin123") {
			MessageBox::Show("Login Succesfully", "Alert Box", MessageBoxButtons::OK, MessageBoxIcon::Information);
			nextPage = true;
		}
		else {
			MessageBox::Show("Invalid", "Alert Box", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		if (nextPage == true) {

			ProgramData^ pd = gcnew ProgramData();
			pd->Set(username);

			MainForm^ mf = gcnew MainForm();
			mf->pd = pd;
			mf->Show();
			Hide();

		}

	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
