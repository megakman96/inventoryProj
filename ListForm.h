#include "AddUserWindowForm.h"
#include "AddDepartmentForm.h"
#include "DeleteItemForm.h"
#include "uniFuncs.h"
#include <iostream>


using namespace System;
using namespace System::IO;
//using namespace sFuncs;

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
	/// Summary for ListForm
	/// </summary>
	public ref class ListForm : public System::Windows::Forms::Form
	{
	public:
		ListForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^ userLoggedIn;
		String ^ servStr;
		settingsVars sStruct;
	private: System::Windows::Forms::TabPage^  testListView;
	private: System::Windows::Forms::ColumnHeader^  SN;
	private: System::Windows::Forms::ColumnHeader^  Inv;
	private: System::Windows::Forms::ColumnHeader^  Model;
	private: System::Windows::Forms::ColumnHeader^  Type;
	private: System::Windows::Forms::ColumnHeader^  Status;
	private: System::Windows::Forms::ColumnHeader^  Users;
	private: System::Windows::Forms::ColumnHeader^  Location;
	private: System::Windows::Forms::ColumnHeader^  LastDate;
	private: System::Windows::Forms::ColumnHeader^  Dept;
	private: System::Windows::Forms::ColumnHeader^  DatePurchase;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::Button^  editButton;
	private: System::Windows::Forms::ListView^  tListV;
	public:



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ListForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private:

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;

	private: System::Windows::Forms::Button^  CloseButton;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  ListsTab;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Button^  AddStatusButton;
	private: System::Windows::Forms::Button^  AddLocationButton;
	private: System::Windows::Forms::Button^  AddTypeButton;
	private: System::Windows::Forms::Button^  AddModelButton;
	private: System::Windows::Forms::Button^  AddDeptButton;
	private: System::Windows::Forms::Button^  AddBrandButton;
	private: System::Windows::Forms::Button^  addUserButton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::Button^  deleteLocationButton;
	private: System::Windows::Forms::Button^  deleteStatusButton;
	private: System::Windows::Forms::Button^  deleteTypeButton;
	private: System::Windows::Forms::Button^  deleteUserButton;
	private: System::Windows::Forms::Button^  deleteModelButton;
	private: System::Windows::Forms::Button^  deleteDepartmentButton;
	private: System::Windows::Forms::Button^  deleteBrandButton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Button^  batchStatusButton;
	private: System::Windows::Forms::Button^  BatchTypeButton;
	private: System::Windows::Forms::Button^  batchUserButton;
	private: System::Windows::Forms::Button^  batchModelButton;
	private: System::Windows::Forms::Button^  BatchLocButton;
	private: System::Windows::Forms::Button^  batchDeptButton;
	private: System::Windows::Forms::Button^  batchBrandButton;
	private: System::Windows::Forms::Label^  AddLabel;
	private: System::Windows::Forms::Label^  deleteLabel;
	private: System::Windows::Forms::Label^  BatchUpdateLabel;
	private: System::Windows::Forms::Label^  editLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::Button^  editUserButton;


	public:


	private:

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->ListsTab = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->AddStatusButton = (gcnew System::Windows::Forms::Button());
			this->AddLocationButton = (gcnew System::Windows::Forms::Button());
			this->AddTypeButton = (gcnew System::Windows::Forms::Button());
			this->AddModelButton = (gcnew System::Windows::Forms::Button());
			this->AddDeptButton = (gcnew System::Windows::Forms::Button());
			this->AddBrandButton = (gcnew System::Windows::Forms::Button());
			this->addUserButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->deleteLocationButton = (gcnew System::Windows::Forms::Button());
			this->deleteStatusButton = (gcnew System::Windows::Forms::Button());
			this->deleteTypeButton = (gcnew System::Windows::Forms::Button());
			this->deleteUserButton = (gcnew System::Windows::Forms::Button());
			this->deleteModelButton = (gcnew System::Windows::Forms::Button());
			this->deleteDepartmentButton = (gcnew System::Windows::Forms::Button());
			this->deleteBrandButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->batchStatusButton = (gcnew System::Windows::Forms::Button());
			this->BatchTypeButton = (gcnew System::Windows::Forms::Button());
			this->batchUserButton = (gcnew System::Windows::Forms::Button());
			this->batchModelButton = (gcnew System::Windows::Forms::Button());
			this->BatchLocButton = (gcnew System::Windows::Forms::Button());
			this->batchDeptButton = (gcnew System::Windows::Forms::Button());
			this->batchBrandButton = (gcnew System::Windows::Forms::Button());
			this->AddLabel = (gcnew System::Windows::Forms::Label());
			this->deleteLabel = (gcnew System::Windows::Forms::Label());
			this->BatchUpdateLabel = (gcnew System::Windows::Forms::Label());
			this->editLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->editUserButton = (gcnew System::Windows::Forms::Button());
			this->testListView = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tListV = (gcnew System::Windows::Forms::ListView());
			this->SN = (gcnew System::Windows::Forms::ColumnHeader());
			this->Inv = (gcnew System::Windows::Forms::ColumnHeader());
			this->Model = (gcnew System::Windows::Forms::ColumnHeader());
			this->Type = (gcnew System::Windows::Forms::ColumnHeader());
			this->Status = (gcnew System::Windows::Forms::ColumnHeader());
			this->Users = (gcnew System::Windows::Forms::ColumnHeader());
			this->Location = (gcnew System::Windows::Forms::ColumnHeader());
			this->LastDate = (gcnew System::Windows::Forms::ColumnHeader());
			this->Dept = (gcnew System::Windows::Forms::ColumnHeader());
			this->DatePurchase = (gcnew System::Windows::Forms::ColumnHeader());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->ListsTab->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->testListView->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90.10526F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.894737F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1053, 532);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->ListsTab);
			this->tabControl1->Controls->Add(this->testListView);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1047, 473);
			this->tabControl1->TabIndex = 1;
			// 
			// ListsTab
			// 
			this->ListsTab->Controls->Add(this->tableLayoutPanel3);
			this->ListsTab->Location = System::Drawing::Point(4, 22);
			this->ListsTab->Name = L"ListsTab";
			this->ListsTab->Size = System::Drawing::Size(1039, 447);
			this->ListsTab->TabIndex = 7;
			this->ListsTab->Text = L"Lists";
			this->ListsTab->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel6, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel7, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->AddLabel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->deleteLabel, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->BatchUpdateLabel, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->editLabel, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 1, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1039, 447);
			this->tableLayoutPanel3->TabIndex = 9;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel4->Controls->Add(this->AddStatusButton, 0, 5);
			this->tableLayoutPanel4->Controls->Add(this->AddLocationButton, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->AddTypeButton, 0, 6);
			this->tableLayoutPanel4->Controls->Add(this->AddModelButton, 0, 4);
			this->tableLayoutPanel4->Controls->Add(this->AddDeptButton, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->AddBrandButton, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->addUserButton, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 92);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 7;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(253, 352);
			this->tableLayoutPanel4->TabIndex = 10;
			// 
			// AddStatusButton
			// 
			this->AddStatusButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddStatusButton->Location = System::Drawing::Point(3, 253);
			this->AddStatusButton->Name = L"AddStatusButton";
			this->AddStatusButton->Size = System::Drawing::Size(247, 44);
			this->AddStatusButton->TabIndex = 7;
			this->AddStatusButton->Text = L"Add Status";
			this->AddStatusButton->UseVisualStyleBackColor = true;
			this->AddStatusButton->Click += gcnew System::EventHandler(this, &ListForm::AddStatusButton_Click);
			// 
			// AddLocationButton
			// 
			this->AddLocationButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddLocationButton->Location = System::Drawing::Point(3, 153);
			this->AddLocationButton->Name = L"AddLocationButton";
			this->AddLocationButton->Size = System::Drawing::Size(247, 44);
			this->AddLocationButton->TabIndex = 3;
			this->AddLocationButton->Text = L"Add Location";
			this->AddLocationButton->UseVisualStyleBackColor = true;
			this->AddLocationButton->Click += gcnew System::EventHandler(this, &ListForm::AddLocationButton_Click);
			// 
			// AddTypeButton
			// 
			this->AddTypeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddTypeButton->Location = System::Drawing::Point(3, 303);
			this->AddTypeButton->Name = L"AddTypeButton";
			this->AddTypeButton->Size = System::Drawing::Size(247, 46);
			this->AddTypeButton->TabIndex = 6;
			this->AddTypeButton->Text = L"Add Machine Type";
			this->AddTypeButton->UseVisualStyleBackColor = true;
			this->AddTypeButton->Click += gcnew System::EventHandler(this, &ListForm::AddTypeButton_Click);
			// 
			// AddModelButton
			// 
			this->AddModelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddModelButton->Location = System::Drawing::Point(3, 203);
			this->AddModelButton->Name = L"AddModelButton";
			this->AddModelButton->Size = System::Drawing::Size(247, 44);
			this->AddModelButton->TabIndex = 4;
			this->AddModelButton->Text = L"Add Model";
			this->AddModelButton->UseVisualStyleBackColor = true;
			this->AddModelButton->Click += gcnew System::EventHandler(this, &ListForm::AddModelButton_Click);
			// 
			// AddDeptButton
			// 
			this->AddDeptButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddDeptButton->Location = System::Drawing::Point(3, 103);
			this->AddDeptButton->Name = L"AddDeptButton";
			this->AddDeptButton->Size = System::Drawing::Size(247, 44);
			this->AddDeptButton->TabIndex = 2;
			this->AddDeptButton->Text = L"Add Department";
			this->AddDeptButton->UseVisualStyleBackColor = true;
			this->AddDeptButton->Click += gcnew System::EventHandler(this, &ListForm::AddDeptButton_Click);
			// 
			// AddBrandButton
			// 
			this->AddBrandButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddBrandButton->Location = System::Drawing::Point(3, 53);
			this->AddBrandButton->Name = L"AddBrandButton";
			this->AddBrandButton->Size = System::Drawing::Size(247, 44);
			this->AddBrandButton->TabIndex = 1;
			this->AddBrandButton->Text = L"Add Brand";
			this->AddBrandButton->UseVisualStyleBackColor = true;
			this->AddBrandButton->Click += gcnew System::EventHandler(this, &ListForm::AddBrandButton_Click);
			// 
			// addUserButton
			// 
			this->addUserButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addUserButton->Location = System::Drawing::Point(3, 3);
			this->addUserButton->Name = L"addUserButton";
			this->addUserButton->Size = System::Drawing::Size(247, 44);
			this->addUserButton->TabIndex = 0;
			this->addUserButton->Text = L"Add User";
			this->addUserButton->UseVisualStyleBackColor = true;
			this->addUserButton->Click += gcnew System::EventHandler(this, &ListForm::addUserButton_Click);
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->deleteLocationButton, 0, 3);
			this->tableLayoutPanel6->Controls->Add(this->deleteStatusButton, 0, 5);
			this->tableLayoutPanel6->Controls->Add(this->deleteTypeButton, 0, 6);
			this->tableLayoutPanel6->Controls->Add(this->deleteUserButton, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->deleteModelButton, 0, 4);
			this->tableLayoutPanel6->Controls->Add(this->deleteDepartmentButton, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->deleteBrandButton, 0, 1);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(521, 92);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 7;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(253, 352);
			this->tableLayoutPanel6->TabIndex = 7;
			// 
			// deleteLocationButton
			// 
			this->deleteLocationButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteLocationButton->Location = System::Drawing::Point(3, 153);
			this->deleteLocationButton->Name = L"deleteLocationButton";
			this->deleteLocationButton->Size = System::Drawing::Size(247, 44);
			this->deleteLocationButton->TabIndex = 3;
			this->deleteLocationButton->Text = L"Delete Location";
			this->deleteLocationButton->UseVisualStyleBackColor = true;
			this->deleteLocationButton->Click += gcnew System::EventHandler(this, &ListForm::deleteLocationButton_Click);
			// 
			// deleteStatusButton
			// 
			this->deleteStatusButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteStatusButton->Location = System::Drawing::Point(3, 253);
			this->deleteStatusButton->Name = L"deleteStatusButton";
			this->deleteStatusButton->Size = System::Drawing::Size(247, 44);
			this->deleteStatusButton->TabIndex = 7;
			this->deleteStatusButton->Text = L"Delete Status";
			this->deleteStatusButton->UseVisualStyleBackColor = true;
			this->deleteStatusButton->Click += gcnew System::EventHandler(this, &ListForm::deleteStatusButton_Click);
			// 
			// deleteTypeButton
			// 
			this->deleteTypeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteTypeButton->Location = System::Drawing::Point(3, 303);
			this->deleteTypeButton->Name = L"deleteTypeButton";
			this->deleteTypeButton->Size = System::Drawing::Size(247, 46);
			this->deleteTypeButton->TabIndex = 6;
			this->deleteTypeButton->Text = L"Delete Machine Type";
			this->deleteTypeButton->UseVisualStyleBackColor = true;
			this->deleteTypeButton->Click += gcnew System::EventHandler(this, &ListForm::deleteTypeButton_Click);
			// 
			// deleteUserButton
			// 
			this->deleteUserButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteUserButton->Location = System::Drawing::Point(3, 3);
			this->deleteUserButton->Name = L"deleteUserButton";
			this->deleteUserButton->Size = System::Drawing::Size(247, 44);
			this->deleteUserButton->TabIndex = 0;
			this->deleteUserButton->Text = L"Delete User";
			this->deleteUserButton->UseVisualStyleBackColor = true;
			this->deleteUserButton->Click += gcnew System::EventHandler(this, &ListForm::deleteUserButton_Click);
			// 
			// deleteModelButton
			// 
			this->deleteModelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteModelButton->Location = System::Drawing::Point(3, 203);
			this->deleteModelButton->Name = L"deleteModelButton";
			this->deleteModelButton->Size = System::Drawing::Size(247, 44);
			this->deleteModelButton->TabIndex = 4;
			this->deleteModelButton->Text = L"Delete Model";
			this->deleteModelButton->UseVisualStyleBackColor = true;
			this->deleteModelButton->Click += gcnew System::EventHandler(this, &ListForm::deleteModelButton_Click);
			// 
			// deleteDepartmentButton
			// 
			this->deleteDepartmentButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteDepartmentButton->Location = System::Drawing::Point(3, 103);
			this->deleteDepartmentButton->Name = L"deleteDepartmentButton";
			this->deleteDepartmentButton->Size = System::Drawing::Size(247, 44);
			this->deleteDepartmentButton->TabIndex = 2;
			this->deleteDepartmentButton->Text = L"Delete Department";
			this->deleteDepartmentButton->UseVisualStyleBackColor = true;
			this->deleteDepartmentButton->Click += gcnew System::EventHandler(this, &ListForm::deleteDepartmentButton_Click);
			// 
			// deleteBrandButton
			// 
			this->deleteBrandButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteBrandButton->Location = System::Drawing::Point(3, 53);
			this->deleteBrandButton->Name = L"deleteBrandButton";
			this->deleteBrandButton->Size = System::Drawing::Size(247, 44);
			this->deleteBrandButton->TabIndex = 1;
			this->deleteBrandButton->Text = L"Delete Brand";
			this->deleteBrandButton->UseVisualStyleBackColor = true;
			this->deleteBrandButton->Click += gcnew System::EventHandler(this, &ListForm::deleteBrandButton_Click);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel7->Controls->Add(this->batchStatusButton, 0, 5);
			this->tableLayoutPanel7->Controls->Add(this->BatchTypeButton, 0, 6);
			this->tableLayoutPanel7->Controls->Add(this->batchUserButton, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->batchModelButton, 0, 4);
			this->tableLayoutPanel7->Controls->Add(this->BatchLocButton, 0, 3);
			this->tableLayoutPanel7->Controls->Add(this->batchDeptButton, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->batchBrandButton, 0, 1);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(780, 92);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 7;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(256, 352);
			this->tableLayoutPanel7->TabIndex = 8;
			// 
			// batchStatusButton
			// 
			this->batchStatusButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->batchStatusButton->Location = System::Drawing::Point(3, 253);
			this->batchStatusButton->Name = L"batchStatusButton";
			this->batchStatusButton->Size = System::Drawing::Size(250, 44);
			this->batchStatusButton->TabIndex = 7;
			this->batchStatusButton->Text = L"Batch Status";
			this->batchStatusButton->UseVisualStyleBackColor = true;
			this->batchStatusButton->Click += gcnew System::EventHandler(this, &ListForm::batchStatusButton_Click);
			// 
			// BatchTypeButton
			// 
			this->BatchTypeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BatchTypeButton->Location = System::Drawing::Point(3, 303);
			this->BatchTypeButton->Name = L"BatchTypeButton";
			this->BatchTypeButton->Size = System::Drawing::Size(250, 46);
			this->BatchTypeButton->TabIndex = 6;
			this->BatchTypeButton->Text = L"Batch Machine Type";
			this->BatchTypeButton->UseVisualStyleBackColor = true;
			this->BatchTypeButton->Click += gcnew System::EventHandler(this, &ListForm::BatchTypeButton_Click);
			// 
			// batchUserButton
			// 
			this->batchUserButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->batchUserButton->Location = System::Drawing::Point(3, 3);
			this->batchUserButton->Name = L"batchUserButton";
			this->batchUserButton->Size = System::Drawing::Size(250, 44);
			this->batchUserButton->TabIndex = 0;
			this->batchUserButton->Text = L"Batch User";
			this->batchUserButton->UseVisualStyleBackColor = true;
			// 
			// batchModelButton
			// 
			this->batchModelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->batchModelButton->Location = System::Drawing::Point(3, 203);
			this->batchModelButton->Name = L"batchModelButton";
			this->batchModelButton->Size = System::Drawing::Size(250, 44);
			this->batchModelButton->TabIndex = 4;
			this->batchModelButton->Text = L"Batch Model";
			this->batchModelButton->UseVisualStyleBackColor = true;
			this->batchModelButton->Click += gcnew System::EventHandler(this, &ListForm::batchModelButton_Click);
			// 
			// BatchLocButton
			// 
			this->BatchLocButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BatchLocButton->Location = System::Drawing::Point(3, 153);
			this->BatchLocButton->Name = L"BatchLocButton";
			this->BatchLocButton->Size = System::Drawing::Size(250, 44);
			this->BatchLocButton->TabIndex = 3;
			this->BatchLocButton->Text = L"Batch Location";
			this->BatchLocButton->UseVisualStyleBackColor = true;
			this->BatchLocButton->Click += gcnew System::EventHandler(this, &ListForm::BatchLocButton_Click);
			// 
			// batchDeptButton
			// 
			this->batchDeptButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->batchDeptButton->Location = System::Drawing::Point(3, 103);
			this->batchDeptButton->Name = L"batchDeptButton";
			this->batchDeptButton->Size = System::Drawing::Size(250, 44);
			this->batchDeptButton->TabIndex = 2;
			this->batchDeptButton->Text = L"Batch Department";
			this->batchDeptButton->UseVisualStyleBackColor = true;
			this->batchDeptButton->Click += gcnew System::EventHandler(this, &ListForm::batchDeptButton_Click);
			// 
			// batchBrandButton
			// 
			this->batchBrandButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->batchBrandButton->Location = System::Drawing::Point(3, 53);
			this->batchBrandButton->Name = L"batchBrandButton";
			this->batchBrandButton->Size = System::Drawing::Size(250, 44);
			this->batchBrandButton->TabIndex = 1;
			this->batchBrandButton->Text = L"Batch Brand";
			this->batchBrandButton->UseVisualStyleBackColor = true;
			this->batchBrandButton->Click += gcnew System::EventHandler(this, &ListForm::batchBrandButton_Click_1);
			// 
			// AddLabel
			// 
			this->AddLabel->AutoSize = true;
			this->AddLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddLabel->Location = System::Drawing::Point(3, 0);
			this->AddLabel->Name = L"AddLabel";
			this->AddLabel->Size = System::Drawing::Size(253, 89);
			this->AddLabel->TabIndex = 11;
			this->AddLabel->Text = L"Add";
			this->AddLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// deleteLabel
			// 
			this->deleteLabel->AutoSize = true;
			this->deleteLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteLabel->Location = System::Drawing::Point(521, 0);
			this->deleteLabel->Name = L"deleteLabel";
			this->deleteLabel->Size = System::Drawing::Size(253, 89);
			this->deleteLabel->TabIndex = 12;
			this->deleteLabel->Text = L"Delete";
			this->deleteLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BatchUpdateLabel
			// 
			this->BatchUpdateLabel->AutoSize = true;
			this->BatchUpdateLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BatchUpdateLabel->Location = System::Drawing::Point(780, 0);
			this->BatchUpdateLabel->Name = L"BatchUpdateLabel";
			this->BatchUpdateLabel->Size = System::Drawing::Size(256, 89);
			this->BatchUpdateLabel->TabIndex = 13;
			this->BatchUpdateLabel->Text = L"Batch Update";
			this->BatchUpdateLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// editLabel
			// 
			this->editLabel->AutoSize = true;
			this->editLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editLabel->Location = System::Drawing::Point(262, 0);
			this->editLabel->Name = L"editLabel";
			this->editLabel->Size = System::Drawing::Size(253, 89);
			this->editLabel->TabIndex = 14;
			this->editLabel->Text = L"Edit";
			this->editLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->Controls->Add(this->editUserButton, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(262, 92);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 7;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(253, 352);
			this->tableLayoutPanel5->TabIndex = 15;
			// 
			// editUserButton
			// 
			this->editUserButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editUserButton->Location = System::Drawing::Point(3, 3);
			this->editUserButton->Name = L"editUserButton";
			this->editUserButton->Size = System::Drawing::Size(247, 44);
			this->editUserButton->TabIndex = 0;
			this->editUserButton->Text = L"Edit User";
			this->editUserButton->UseVisualStyleBackColor = true;
			this->editUserButton->Click += gcnew System::EventHandler(this, &ListForm::editUserButton_Click);
			// 
			// testListView
			// 
			this->testListView->Controls->Add(this->tableLayoutPanel8);
			this->testListView->Location = System::Drawing::Point(4, 22);
			this->testListView->Name = L"testListView";
			this->testListView->Size = System::Drawing::Size(1039, 447);
			this->testListView->TabIndex = 8;
			this->testListView->Text = L"Test List View";
			this->testListView->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 4;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel8->Controls->Add(this->tListV, 1, 1);
			this->tableLayoutPanel8->Controls->Add(this->editButton, 2, 2);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 4;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(1039, 447);
			this->tableLayoutPanel8->TabIndex = 1;
			// 
			// tListV
			// 
			this->tListV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->SN, this->Inv, this->Model,
					this->Type, this->Status, this->Users, this->Location, this->LastDate, this->Dept, this->DatePurchase
			});
			this->tableLayoutPanel8->SetColumnSpan(this->tListV, 2);
			this->tListV->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tListV->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(2) { listViewItem1, listViewItem2 });
			this->tListV->Location = System::Drawing::Point(18, 18);
			this->tListV->Name = L"tListV";
			this->tListV->Size = System::Drawing::Size(1003, 376);
			this->tListV->TabIndex = 0;
			this->tListV->UseCompatibleStateImageBehavior = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel2->Controls->Add(this->CloseButton, 2, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 482);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1047, 47);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// CloseButton
			// 
			this->CloseButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CloseButton->Location = System::Drawing::Point(902, 5);
			this->CloseButton->Margin = System::Windows::Forms::Padding(5);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(140, 37);
			this->CloseButton->TabIndex = 1;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &ListForm::CloseButton_Click);
			// 
			// editButton
			// 
			this->editButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editButton->Location = System::Drawing::Point(917, 400);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(104, 29);
			this->editButton->TabIndex = 1;
			this->editButton->Text = L"Edit";
			this->editButton->UseVisualStyleBackColor = true;
			this->editButton->Click += gcnew System::EventHandler(this, &ListForm::editButton_Click);
			// 
			// ListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 532);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"ListForm";
			this->Text = L"Lists";
			this->Load += gcnew System::EventHandler(this, &ListForm::ListForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ListsTab->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->testListView->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//#include "testHeader.h"
private: System::Void ListForm_Load(System::Object^  sender, System::EventArgs^  e) {
	setLisForm();
}

private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

private: System::Void addUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddUserWindowForm ^ AddUserWin = gcnew AddUserWindowForm;
		AddUserWin->sStruct = sStruct;
		AddUserWin->servStr = servStr;
		AddUserWin->addOrUpdate = true;
		AddUserWin->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddDeptButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addDeptF = gcnew AddDepartmentForm;
		String ^ labStr = "New Department";
		addDeptF->servStr = servStr;
		addDeptF->setVals(labStr);
		addDeptF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddBrandButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addBrandF = gcnew AddDepartmentForm;
		String ^ labStr = "New Brand";
		addBrandF->servStr = servStr;
		addBrandF->setVals(labStr);
		addBrandF->ShowDialog();
	}	
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddLocationButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addLocF = gcnew AddDepartmentForm;
		String ^ labStr = "New Location";
		addLocF->servStr = servStr;
		addLocF->setVals(labStr);
		addLocF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddModelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addModelF = gcnew AddDepartmentForm;
		addModelF->servStr = servStr;
		String ^ labStr = "New Model";

		addModelF->setVals(labStr);
		addModelF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddStatusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addStatusF = gcnew AddDepartmentForm;
		String ^ labStr = "New Status";
		addStatusF->servStr = servStr;
		addStatusF->setVals(labStr);
		addStatusF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void AddTypeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		AddDepartmentForm ^ addTypeF = gcnew AddDepartmentForm;
		String ^ labStr = "New Machine Type";
		addTypeF->servStr = servStr;
		addTypeF->setVals(labStr);
		addTypeF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ deleteUserF = gcnew DeleteItemForm;
		String ^ labStr = "Delete User";
		deleteUserF->servStr = servStr;
		deleteUserF->setVals(labStr);
		deleteUserF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteDepartmentButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ deleteDeptF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Department";
		deleteDeptF->servStr = servStr;
		deleteDeptF->setVals(labStr);
		deleteDeptF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteBrandButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ delBrandF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Brand";
		delBrandF->servStr = servStr;
		delBrandF->setVals(labStr);
		delBrandF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteLocationButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ delLocF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Location";
		delLocF->servStr = servStr;
		delLocF->setVals(labStr);
		delLocF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteModelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//String ^ servStr, String ^ userNStr
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ delModelF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Model";
		delModelF->servStr = servStr;
		delModelF->setVals(labStr);
		delModelF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteStatusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ delStatusF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Status";
		delStatusF->servStr = servStr;
		delStatusF->setVals(labStr);
		delStatusF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void deleteTypeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		DeleteItemForm ^ delTypeF = gcnew DeleteItemForm;
		String ^ labStr = "Delete Machine Type";
		delTypeF->servStr = sStruct.servStr;
		delTypeF->setVals(labStr);
		delTypeF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void batchStatusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(4);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void batchBrandButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(1);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void batchDeptButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(2);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void BatchLocButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(5);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void batchModelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(6);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void BatchTypeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(servStr, userLoggedIn)) {
		initSQL(3);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void initSQL(int i) {
	MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	String^ fFileName;
	StreamReader^ sr;
	String^ input;
	String ^ str;
	String ^ tableStr;
	switch (i) {
		default: 0; break;
		case 1: fFileName = "data/lists/brandList.txt"; tableStr = "brands"; break;
		case 2: fFileName = "data/lists/deptList.txt"; tableStr = "departments"; break;
		case 3: fFileName = "data/lists/typeList.txt"; tableStr = "types"; break;
		case 4: fFileName = "data/lists/statusList.txt"; tableStr = "statuses"; break;
		case 5: fFileName = "data/lists/locationList.txt"; tableStr = "locations"; break;
		case 6: fFileName = "data/lists/modelList.txt"; tableStr = "models"; break;
		}
	sr = File::OpenText(fFileName);
	conDB->Open();
	if (!File::Exists(fFileName))
	{
		 return;
	}
	while ((input = sr->ReadLine()) != nullptr)
	{
		MySqlCommand^ cmD = gcnew MySqlCommand("CALL batchUpdate('" + tableStr + "', '" + input + "')", conDB);
		cmD->ExecuteNonQuery();
	}
	sr->Close();
	conDB->Close();
}

private: System::Void editUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, userLoggedIn)) {
		DeleteItemForm ^ updateUserF = gcnew DeleteItemForm;
		String ^ labStr = "Update User";

		updateUserF->servStr = servStr;
		updateUserF->setVals(labStr);
		updateUserF->ShowDialog();

		//updateUserF->setVals(labStr);
		//updateUserF->sStruct = sStruct;
		//updateUserF->servStr = servStr;
		//updateUserF->ShowDialog();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void setLisForm() {
	tListV->View = View::Details;
	tListV->GridLines = true;
	tListV->FullRowSelect = true;
	tListV->Columns->Add("1", 100);
	tListV->Columns->Add("2", 100);
	tListV->Columns->Add("3", 100);
	tListV->Columns->Add("4", 100);
	tListV->Columns->Add("5", 100);
	tListV->Columns->Add("6", 100);
	tListV->Columns->Add("7", 100);
	tListV->Columns->Add("8", 100);
	tListV->Columns->Add("9", 100);
	ListViewItem ^ lIt;
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	MySqlConnection^ conDB2 = gcnew MySqlConnection(sStruct.servStr);
	try {
		conDB->Open();
		//MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' ORDER BY historyIndex DESC;", conDB);
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machines;", conDB);
		MySqlDataReader ^ myReader, ^ myReader2;
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			//MessageBox::Show("1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			conDB2->Open();
			//MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT * FROM machines WHERE SerialNumber='" + myReader->GetString(0) + "';", conDB2);
			MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' AND machines_SerialNumber='" + myReader->GetString(0) + "';", conDB2);
			myReader2 = macCmd->ExecuteReader();
			while (myReader2->Read()) {
				String ^ userID = myReader2->GetString(3);
				String ^ userN = getUserName(userID, sStruct.servStr);
				//MessageBox::Show("3", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				array<String^>^ row = { myReader->GetString(0), //0 - SN
					myReader->GetString(1),//1 - InventoryTag
					myReader->GetString(2), //2 - ModelNum
					myReader->GetString(5),//3 - Type
					myReader2->GetString(1), //4 - Status
					userN,//5 - Users
					myReader2->GetString(2),//6 - Location
					myReader2->GetString(4),//8 - Last date inventory
					myReader2->GetString(6),//7 - Dept
					myReader->GetString(3)//9 - Date purchase};}
				};
				//String[] ^ 
				
				//ListViewItem ^ listViewI = gcnew ListViewItem(row);

				/*lIt->Text = myReader->GetString(0);
				lIt->SubItems->Add(myReader->GetString(1));
				lIt->SubItems->Add(myReader->GetString(2));
				lIt->SubItems->Add(myReader->GetString(5));
				lIt->SubItems->Add(myReader2->GetString(1));
				lIt->SubItems->Add(userN);
				lIt->SubItems->Add(myReader2->GetString(2));
				lIt->SubItems->Add(myReader2->GetString(4));
				lIt->SubItems->Add(myReader2->GetString(6));
				lIt->SubItems->Add(myReader->GetString(3));*/
				lIt = gcnew ListViewItem(row);

				tListV->Items->Add(lIt);



				/*InventoryListView->Rows->Add(
					//plus,
					"+",
					myReader->GetString(0), //0 - SN
					myReader->GetString(1),//1 - InventoryTag
					myReader->GetString(2), //2 - ModelNum
					myReader->GetString(5),//3 - Type
					myReader2->GetString(1), //4 - Status
					userN,//5 - Users
					myReader2->GetString(2),//6 - Location
					myReader2->GetString(4),//8 - Last date inventory
					myReader2->GetString(6),//7 - Dept
					myReader->GetString(3)//9 - Date purchase
				);*/
			}
			conDB2->Close();
		}
		conDB->Close();
		//setDisplayingTextLabel("Current Machines2");
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at viewCurrentEntries2 in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void editButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteItemForm ^ dForm = gcnew DeleteItemForm;
	dForm->deleteComboBox->Text = tListV->SelectedItems[0]->SubItems[0]->Text;
	dForm->ShowDialog();
}
};
}
