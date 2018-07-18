#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
#include "uniFuncs.h"
#include "AddDepartmentForm.h"

using namespace System;
using namespace System::IO;

#pragma once

namespace WinApp2 {

	using namespace System::Data::SqlClient;
	using namespace System::Data::Sql;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddUserWindowForm
	/// </summary>
	public ref class AddUserWindowForm : public System::Windows::Forms::Form
	{
	public:
		AddUserWindowForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Boolean addOrUpdate; //true: add user, false: update user
	private: System::Windows::Forms::Label^  titleLabel;
	public:
		int updateUserStr;
		String ^ fNameRef;
		String ^ lNameRef;
		String ^ servStr;
		settingsVars sStruct;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	public:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	public: System::Windows::Forms::Button^  newDeptBtn;
	private:
	public: System::Windows::Forms::Button^  newLocBtn;

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddUserWindowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:

	private: System::Windows::Forms::TextBox^  passwordTextBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lNameLabel;
	private: System::Windows::Forms::Label^  commentsLabel;



	private: System::Windows::Forms::TextBox^  firstNameTextBox;
	private: System::Windows::Forms::Label^  passwordLabel;

	private: System::Windows::Forms::Label^  canLogInLabel;


	private: System::Windows::Forms::Button^  AddUserSaveButton;
	private: System::Windows::Forms::Button^  cancelUserSaveButton;
	private: System::Windows::Forms::Label^  locationLabel;
	private: System::Windows::Forms::Label^  deptLabel;






	private: System::Windows::Forms::RichTextBox^  commentsTextBox;





	private: System::Windows::Forms::CheckBox^  canLogCheck;
	private: System::Windows::Forms::ComboBox^  deptCombo;
	private: System::Windows::Forms::TextBox^  lastNameTextBox;
	private: System::Windows::Forms::ComboBox^  locCombo;
	private: System::Windows::Forms::TextBox^  usernameTextBox;

	private: System::Windows::Forms::TextBox^  confirmPassTextBox;


	private: System::Windows::Forms::Label^  confirmPassLabel;

	private: System::Windows::Forms::Label^  usernameLabel;


	private: System::Windows::Forms::CheckBox^  adminCheckBox;
	private: System::Windows::Forms::Label^  label4;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->lNameLabel = (gcnew System::Windows::Forms::Label());
			this->locationLabel = (gcnew System::Windows::Forms::Label());
			this->deptLabel = (gcnew System::Windows::Forms::Label());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->commentsLabel = (gcnew System::Windows::Forms::Label());
			this->confirmPassLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->adminCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->canLogInLabel = (gcnew System::Windows::Forms::Label());
			this->canLogCheck = (gcnew System::Windows::Forms::CheckBox());
			this->confirmPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->locCombo = (gcnew System::Windows::Forms::ComboBox());
			this->deptCombo = (gcnew System::Windows::Forms::ComboBox());
			this->cancelUserSaveButton = (gcnew System::Windows::Forms::Button());
			this->AddUserSaveButton = (gcnew System::Windows::Forms::Button());
			this->commentsTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->newDeptBtn = (gcnew System::Windows::Forms::Button());
			this->newLocBtn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 8;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				45)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				45)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				18)));
			this->tableLayoutPanel1->Controls->Add(this->passwordTextBox, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->usernameTextBox, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->usernameLabel, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->passwordLabel, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->lNameLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->locationLabel, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->deptLabel, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->titleLabel, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->commentsLabel, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->confirmPassLabel, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->confirmPassTextBox, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->firstNameTextBox, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->lastNameTextBox, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->locCombo, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->deptCombo, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->cancelUserSaveButton, 6, 10);
			this->tableLayoutPanel1->Controls->Add(this->AddUserSaveButton, 4, 10);
			this->tableLayoutPanel1->Controls->Add(this->commentsTextBox, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->newDeptBtn, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->newLocBtn, 2, 5);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 12;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(867, 358);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->Location = System::Drawing::Point(666, 108);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(180, 20);
			this->passwordTextBox->TabIndex = 17;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->Location = System::Drawing::Point(666, 83);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(180, 20);
			this->usernameTextBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(18, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->usernameLabel->Location = System::Drawing::Point(435, 80);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(180, 25);
			this->usernameLabel->TabIndex = 36;
			this->usernameLabel->Text = L"Username";
			this->usernameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->passwordLabel->Location = System::Drawing::Point(435, 105);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(180, 25);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			this->passwordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lNameLabel
			// 
			this->lNameLabel->AutoSize = true;
			this->lNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lNameLabel->Location = System::Drawing::Point(18, 105);
			this->lNameLabel->Name = L"lNameLabel";
			this->lNameLabel->Size = System::Drawing::Size(180, 25);
			this->lNameLabel->TabIndex = 1;
			this->lNameLabel->Text = L"Last Name";
			this->lNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// locationLabel
			// 
			this->locationLabel->AutoSize = true;
			this->locationLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->locationLabel->Location = System::Drawing::Point(18, 130);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(180, 25);
			this->locationLabel->TabIndex = 23;
			this->locationLabel->Text = L"Location";
			this->locationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// deptLabel
			// 
			this->deptLabel->AutoSize = true;
			this->deptLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deptLabel->Location = System::Drawing::Point(18, 155);
			this->deptLabel->Name = L"deptLabel";
			this->deptLabel->Size = System::Drawing::Size(180, 25);
			this->deptLabel->TabIndex = 24;
			this->deptLabel->Text = L"Department";
			this->deptLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->titleLabel, 2);
			this->titleLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->titleLabel->Location = System::Drawing::Point(249, 15);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(366, 50);
			this->titleLabel->TabIndex = 38;
			this->titleLabel->Text = L"label2";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// commentsLabel
			// 
			this->commentsLabel->AutoSize = true;
			this->commentsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->commentsLabel->Location = System::Drawing::Point(18, 195);
			this->commentsLabel->Name = L"commentsLabel";
			this->commentsLabel->Size = System::Drawing::Size(180, 103);
			this->commentsLabel->TabIndex = 6;
			this->commentsLabel->Text = L"Comments";
			this->commentsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// confirmPassLabel
			// 
			this->confirmPassLabel->AutoSize = true;
			this->confirmPassLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->confirmPassLabel->Location = System::Drawing::Point(435, 130);
			this->confirmPassLabel->Name = L"confirmPassLabel";
			this->confirmPassLabel->Size = System::Drawing::Size(180, 25);
			this->confirmPassLabel->TabIndex = 35;
			this->confirmPassLabel->Text = L"Confirm Password";
			this->confirmPassLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->adminCheckBox, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(663, 155);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(186, 25);
			this->tableLayoutPanel3->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Is Admin\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminCheckBox
			// 
			this->adminCheckBox->AutoSize = true;
			this->adminCheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->adminCheckBox->Location = System::Drawing::Point(96, 3);
			this->adminCheckBox->Name = L"adminCheckBox";
			this->adminCheckBox->Size = System::Drawing::Size(87, 19);
			this->adminCheckBox->TabIndex = 1;
			this->adminCheckBox->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Controls->Add(this->canLogInLabel, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->canLogCheck, 1, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(432, 155);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(186, 25);
			this->tableLayoutPanel6->TabIndex = 40;
			// 
			// canLogInLabel
			// 
			this->canLogInLabel->AutoSize = true;
			this->canLogInLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->canLogInLabel->Location = System::Drawing::Point(3, 0);
			this->canLogInLabel->Name = L"canLogInLabel";
			this->canLogInLabel->Size = System::Drawing::Size(87, 25);
			this->canLogInLabel->TabIndex = 19;
			this->canLogInLabel->Text = L"Can log in\?";
			this->canLogInLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// canLogCheck
			// 
			this->canLogCheck->AutoSize = true;
			this->canLogCheck->Dock = System::Windows::Forms::DockStyle::Fill;
			this->canLogCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->canLogCheck->Location = System::Drawing::Point(96, 3);
			this->canLogCheck->Name = L"canLogCheck";
			this->canLogCheck->Size = System::Drawing::Size(87, 19);
			this->canLogCheck->TabIndex = 0;
			this->canLogCheck->UseVisualStyleBackColor = true;
			// 
			// confirmPassTextBox
			// 
			this->confirmPassTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->confirmPassTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmPassTextBox->Location = System::Drawing::Point(666, 133);
			this->confirmPassTextBox->Name = L"confirmPassTextBox";
			this->confirmPassTextBox->Size = System::Drawing::Size(180, 20);
			this->confirmPassTextBox->TabIndex = 0;
			this->confirmPassTextBox->UseSystemPasswordChar = true;
			// 
			// firstNameTextBox
			// 
			this->firstNameTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->firstNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstNameTextBox->Location = System::Drawing::Point(249, 83);
			this->firstNameTextBox->Name = L"firstNameTextBox";
			this->firstNameTextBox->Size = System::Drawing::Size(180, 20);
			this->firstNameTextBox->TabIndex = 7;
			// 
			// lastNameTextBox
			// 
			this->lastNameTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameTextBox->Location = System::Drawing::Point(249, 108);
			this->lastNameTextBox->Name = L"lastNameTextBox";
			this->lastNameTextBox->Size = System::Drawing::Size(180, 20);
			this->lastNameTextBox->TabIndex = 15;
			// 
			// locCombo
			// 
			this->locCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->locCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->locCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->locCombo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locCombo->FormattingEnabled = true;
			this->locCombo->Location = System::Drawing::Point(249, 133);
			this->locCombo->Name = L"locCombo";
			this->locCombo->Size = System::Drawing::Size(180, 21);
			this->locCombo->TabIndex = 0;
			// 
			// deptCombo
			// 
			this->deptCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->deptCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->deptCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deptCombo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deptCombo->FormattingEnabled = true;
			this->deptCombo->Location = System::Drawing::Point(249, 158);
			this->deptCombo->Name = L"deptCombo";
			this->deptCombo->Size = System::Drawing::Size(180, 21);
			this->deptCombo->TabIndex = 0;
			// 
			// cancelUserSaveButton
			// 
			this->cancelUserSaveButton->Location = System::Drawing::Point(666, 316);
			this->cancelUserSaveButton->Name = L"cancelUserSaveButton";
			this->cancelUserSaveButton->Size = System::Drawing::Size(180, 24);
			this->cancelUserSaveButton->TabIndex = 22;
			this->cancelUserSaveButton->Text = L"Close";
			this->cancelUserSaveButton->UseVisualStyleBackColor = true;
			this->cancelUserSaveButton->Click += gcnew System::EventHandler(this, &AddUserWindowForm::cancelUserSaveButton_Click);
			// 
			// AddUserSaveButton
			// 
			this->AddUserSaveButton->Location = System::Drawing::Point(435, 316);
			this->AddUserSaveButton->Name = L"AddUserSaveButton";
			this->AddUserSaveButton->Size = System::Drawing::Size(180, 24);
			this->AddUserSaveButton->TabIndex = 21;
			this->AddUserSaveButton->Text = L"Save";
			this->AddUserSaveButton->UseVisualStyleBackColor = true;
			this->AddUserSaveButton->Click += gcnew System::EventHandler(this, &AddUserWindowForm::AddUserSaveButton_Click);
			// 
			// commentsTextBox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->commentsTextBox, 4);
			this->commentsTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->commentsTextBox->Location = System::Drawing::Point(249, 198);
			this->commentsTextBox->Name = L"commentsTextBox";
			this->commentsTextBox->Size = System::Drawing::Size(597, 97);
			this->commentsTextBox->TabIndex = 25;
			this->commentsTextBox->Text = L"";
			// 
			// newDeptBtn
			// 
			this->newDeptBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newDeptBtn->Location = System::Drawing::Point(204, 158);
			this->newDeptBtn->Name = L"newDeptBtn";
			this->newDeptBtn->Size = System::Drawing::Size(39, 19);
			this->newDeptBtn->TabIndex = 45;
			this->newDeptBtn->Text = L"New";
			this->newDeptBtn->UseVisualStyleBackColor = true;
			this->newDeptBtn->Click += gcnew System::EventHandler(this, &AddUserWindowForm::newDeptBtn_Click);
			// 
			// newLocBtn
			// 
			this->newLocBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newLocBtn->Location = System::Drawing::Point(204, 133);
			this->newLocBtn->Name = L"newLocBtn";
			this->newLocBtn->Size = System::Drawing::Size(39, 19);
			this->newLocBtn->TabIndex = 41;
			this->newLocBtn->Text = L"New";
			this->newLocBtn->UseVisualStyleBackColor = true;
			this->newLocBtn->Click += gcnew System::EventHandler(this, &AddUserWindowForm::newLocBtn_Click);
			// 
			// AddUserWindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 358);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"AddUserWindowForm";
			this->Text = L"AddUserWindowForm";
			this->Load += gcnew System::EventHandler(this, &AddUserWindowForm::AddUserWindowForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddUserSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ fNameStr = firstNameTextBox->Text;
		String ^ lNameStr = lastNameTextBox->Text;
		String ^ passStr = passwordTextBox->Text;
		String ^ passStr2 = confirmPassTextBox->Text;
		String ^ locStr = locCombo->Text;
		String ^ deptStr = deptCombo->Text;
		String ^ commStr = commentsTextBox->Text;
		String ^ userNStr = usernameTextBox->Text;

		if (passStr != passStr2) {
			MessageBox::Show("Passwords don't match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			int canLogInt = 0;
			if (canLogCheck->Checked == true) {
				canLogInt = 1;
			}
			else {
				canLogInt = 0;
			}
			int admInt = 0;
			if (adminCheckBox->Checked == true) {
				admInt = 1;
			}
			else {
				admInt = 0;
			}
			try {
				MySqlConnection^ getDbCon1 = gcnew MySqlConnection(servStr);
				getDbCon1->Open();
				//String ^ userIDStr2 = getUserId(sStruct.servStr, updateUserStr, sStruct.lastUser);
				if (addOrUpdate) {
					//MessageBox::Show(sStruct.servStr, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					MySqlCommand^ macCmd = gcnew MySqlCommand("CALL newUser('" + fNameStr + "', '" + lNameStr + "', '" + passStr + "', '" + canLogInt + "', '"
						+ locStr + "', '" + deptStr + "', '" + commStr + "', '" + userNStr + "', '" + admInt + "');", getDbCon1);
					macCmd->ExecuteNonQuery();
				}
				else {
					//String ^ userIDStr2 = getUserId(sStruct.servStr, updateUserStr, sStruct.lastUser);
					MySqlCommand^ macCmd = gcnew MySqlCommand("UPDATE users SET FirstName='" + fNameStr + "', LastName='" + lNameStr + "', PasswordV='" +
						passStr + "', CanLogin='" + canLogInt + "', locations_Locations='" + locStr + "', departments_Department='" + deptStr +
						"', username='" + userNStr + "', Comments='" + commStr +"', Admin='" + admInt + "' WHERE UserID = '" + updateUserStr + "'; ", getDbCon1);
					//getDbCon1->Open();
					macCmd->ExecuteNonQuery();
				}

				getDbCon1->Close();
			}
			catch (MySqlException ^e) {
				String ^ errorMsg = "Failed to open server at AddUserSaveButton_Click in AddUserWindowForm!";
				MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			Close();
		}
	}
private: System::Void cancelUserSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void AddUserWindowForm_Load(System::Object^  sender, System::EventArgs^  e) {
	clearDrops();
	changeVisualsForUpdate();
	if (addOrUpdate == true) {
		titleLabel->Text = "Add New User";
	}
	else if (addOrUpdate == false) {
		titleLabel->Text = "Update User: " + makeNameString(fNameRef, lNameRef);
	}
	try {
		MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
		MySqlDataReader ^ myReader, ^ mr2;
		String ^ oStr, ^ oStr2;
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM departments;", conDB);
		MySqlCommand^ cmD2 = gcnew MySqlCommand("SELECT * FROM locations;", conDB);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			oStr = myReader->GetString(0);
			deptCombo->Items->Add(oStr);
		}
		conDB->Close();
		conDB->Open();
		mr2 = cmD2->ExecuteReader();
		while (mr2->Read()) {
			oStr2 = mr2->GetString(0);
			locCombo->Items->Add(oStr2);
		}
		conDB->Close();
		lNameLabel->Focus();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Failed to open server at AddUserWindowForm_Load in AddUserWindowForm!";
		MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void clearDrops() {
	locCombo->Items->Clear();
	deptCombo->Items->Clear();
}

public: System::Void changeVisualsForUpdate() {

	if (!addOrUpdate) {
		try {
			//MessageBox::Show("error", updateUserStr.ToString(), MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			MySqlConnection^ getDbCon = gcnew MySqlConnection(servStr);
			MySqlDataReader ^ myReaderGet;

			getDbCon->Open();
			MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT * FROM users WHERE UserID='" + updateUserStr + "';", getDbCon);
			//MessageBox::Show("error", "3", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			myReaderGet = macCmd->ExecuteReader();
			while (myReaderGet->Read()) {
				firstNameTextBox->Text = myReaderGet->GetString(1);
				lastNameTextBox->Text = myReaderGet->GetString(2);
				//MessageBox::Show("error", "2", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				fNameRef = myReaderGet->GetString(1);
				lNameRef = myReaderGet->GetString(2);
				if (myReaderGet->GetString(4) == "1") {
					canLogCheck->Checked = true;
				}
				if (myReaderGet->GetString(8) == "1") {
					adminCheckBox->Checked = true;
				}
				passwordTextBox->Text = myReaderGet->GetString(3);
				confirmPassTextBox->Text = myReaderGet->GetString(3);
				locCombo->Text = myReaderGet->GetString(5);
				deptCombo->Text = myReaderGet->GetString(6);
				commentsTextBox->Text = myReaderGet->GetString(9);
				usernameTextBox->Text = myReaderGet->GetString(7);
			}
		}
		catch (MySqlException ^e) {
			String ^ errorMsg = "Failed to open server at changeVisualsForupdate in AddUserWindowForm!";
			MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	else {
		firstNameTextBox->Text = "";
		lastNameTextBox->Text = "";
		passwordTextBox->Text = "";
		confirmPassTextBox->Text = "";
		locCombo->Text = "";
		deptCombo->Text = "";
		commentsTextBox->Text = "";
		usernameTextBox->Text = "";
	}
}
public: System::Void setUserUpdateRef(int userRef) {
	addOrUpdate = false;
	updateUserStr = userRef;
}
public: System::String ^ makeNameString(String ^ fName, String ^ lName) {
	String ^ nName;
	nName = lName + ", " + fName;
	return nName;
}
private: System::Void newLocBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addLocF = gcnew AddDepartmentForm;
		addLocF->servStr = sStruct.servStr;
		String ^ labStr = "New Location";
		addLocF->setVals(labStr);
		addLocF->ShowDialog();
		updateUI();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
public: System::Void updateUI() {
	clearDrops();
	if (addOrUpdate == true) {
		titleLabel->Text = "Add New User";
	}
	else if (addOrUpdate == false) {
		titleLabel->Text = "Update User: " + makeNameString(fNameRef, lNameRef);
	}
	try {
		MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
		MySqlDataReader ^ myReader, ^ mr2;
		String ^ oStr, ^ oStr2;
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM departments;", conDB);
		MySqlCommand^ cmD2 = gcnew MySqlCommand("SELECT * FROM locations;", conDB);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			oStr = myReader->GetString(0);
			deptCombo->Items->Add(oStr);
		}
		conDB->Close();
		conDB->Open();
		mr2 = cmD2->ExecuteReader();
		while (mr2->Read()) {
			oStr2 = mr2->GetString(0);
			locCombo->Items->Add(oStr2);
		}
		conDB->Close();
		lNameLabel->Focus();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Failed to open server at AddUserWindowForm_Load in AddUserWindowForm!";
		MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void newDeptBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addDept = gcnew AddDepartmentForm;
		addDept->servStr = sStruct.servStr;
		String ^ labStr = "New Department";
		addDept->setVals(labStr);
		addDept->ShowDialog();
		updateUI();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
};
}
