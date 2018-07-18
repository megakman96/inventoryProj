#include "ListForm.h"
#include "AddUserWindowForm.h"
#include "loginWindowForm.h"
#include "EditSingleMachineForm.h"
#include "AddNewMachineWindow.h"
#include "MessagingForm.h"
#include "SettingsForm.h"
#include "unifuncs.h"
#include <Windows.h>
#include <vector>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <locale.h>
#include <cstdio>
#include <string>
#include <time.h>
#include <msclr/marshal_cppstd.h>

#using <System.Drawing.dll>
#using <System.dll>
#using <System.Windows.Forms.dll>

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
	using namespace System::Threading;
	using namespace MySql::Data::MySqlClient;
	//using namespace System::Data::SQLite;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//InitializeBackgoundWorker();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^ servAddrStr;
		String ^ servPortStr;
		String ^ servUserStr;
		String ^ servPassStr;
		String ^ servDBStr;
		String ^ userPassStr;
		String ^ serverStr1;
		Boolean loggedIn;
		String ^ currentScrn;
		String ^ nextScrn;
		Stack ^ scrnStack = gcnew Stack;
		Boolean backB = false;
		int totalMachinesCnt = 0;


		//Settings
		DataSet ^ dSet;
		settingsVars settingsStruct;



		//DataTable currentMach;

	private: System::Windows::Forms::TableLayoutPanel^  MainContentTable;
	public:

	public:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Button^  computerBtn;

	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::ComboBox^  SearchFilterDrop;
	private: System::Windows::Forms::ComboBox^  searchForCombo;
	private: System::Windows::Forms::Button^  clearSearchButton;
	private: System::Windows::Forms::Label^  searchLabelTxt;


	private: System::Windows::Forms::Button^  newMachineButton;
	private: System::Windows::Forms::Button^  MessagesButton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;

	private:

	public:



	private: System::Windows::Forms::Label^  displayingTextLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  assetInfoBox24;


	private: System::Windows::Forms::TextBox^  assetInfoBox23;

	private: System::Windows::Forms::TextBox^  assetInfoBox22;

	private: System::Windows::Forms::Button^  editThisMachineButton;
	private: System::Windows::Forms::Label^  assetInfoLabel12;
	private: System::Windows::Forms::Label^  assetInfoLabel13;
	private: System::Windows::Forms::Label^  assetInfoLabel24;

	private: System::Windows::Forms::Label^  assetInfoLabel23;

	private: System::Windows::Forms::Label^  assetInfoLabel22;

	private: System::Windows::Forms::Label^  assetInfoLabel16;
	private: System::Windows::Forms::Label^  assetInfoLabel15;

	private: System::Windows::Forms::Label^  assetInfoLabel14;
	private: System::Windows::Forms::TextBox^  assetInfoBox13;


	private: System::Windows::Forms::TextBox^  assetInfoBox12;

	private: System::Windows::Forms::Label^  assetInfoLabel25;
	private: System::Windows::Forms::Label^  assetInfoLabel26;
	private: System::Windows::Forms::TextBox^  assetInfoBox14;
	private: System::Windows::Forms::TextBox^  assetInfoBox15;
	private: System::Windows::Forms::TextBox^  assetInfoBox16;




	private: System::Windows::Forms::TextBox^  assetInfoBox25;
	private: System::Windows::Forms::TextBox^  assetInfoBox26;


	private: System::Windows::Forms::Label^  assetInfoLabel;

	private: System::Windows::Forms::Label^  editQueueLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
	private: System::Windows::Forms::Button^  editBatchButton;
	private: System::Windows::Forms::Button^  ClearListButton;
	private: System::Windows::Forms::DataGridView^  queueGridView;
	private: System::Windows::Forms::DataGridViewButtonColumn^  minusColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  qSNC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  qInvC;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  FileMenubutton;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSettingsMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  listSettingMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^  preferencesSettingMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^  checksSettingMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^  loginLogout;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  termsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripAboutButton;
	private: System::Windows::Forms::ToolStripMenuItem^  supportToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
private: System::Windows::Forms::StatusStrip^  statusStrip1;
private: System::Windows::Forms::ToolStripStatusLabel^  bottomLeftStatus;
private: System::Windows::Forms::ToolStripStatusLabel^  bottomLeftMessageStatus;
private: System::Windows::Forms::Button^  hardDrivesButton;
private: System::Windows::Forms::Button^  editPlusButton;
private: System::Windows::Forms::TextBox^  assetInfoBox21;

private: System::Windows::Forms::TextBox^  assetInfoBox11;

private: System::Windows::Forms::Label^  assetInfoLabel11;
private: System::Windows::Forms::Label^  assetInfoLabel21;
private: System::Windows::Forms::Button^  usersButton;
private: System::Windows::Forms::Button^  mainMenuBtn;
private: System::Windows::Forms::Button^  batchTest;


private: System::Windows::Forms::ListView^  InvListView;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel18;
private: System::Windows::Forms::Button^  backBtn;
private: System::Windows::Forms::Button^  topPlusBtn;
private: System::Windows::Forms::Button^  viewBtn;
private: System::Windows::Forms::Panel^  ControlPanel1;
private: System::Windows::Forms::ToolStripProgressBar^  progressBar1;
private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;



		 //private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;


		 //-----------------

	public:
		String ^ usernameString;

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

	private:

	protected:

	private:

	private:

	public:

		//Array ^ arBrand;
		//array<System::String ^>^ arBrand = gcnew array<System::String ^>(30);

	public:

public:

public:

public:

	public:

private: System::Windows::Forms::DataGridViewTextBoxColumn^  UpdaterColumn;


private: System::Windows::Forms::DataGridViewTextBoxColumn^  CurrColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CommColumn;
private: System::Windows::Forms::DataGridViewButtonColumn^  qMinusButton;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  qSNColumn;

private: System::Windows::Forms::BindingSource ^ bindingSource1;



private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;



public:

	private:

	private:

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:

		/*void InitializeBackgoundWorker()
		{
			backgroundWorker1->DoWork += gcnew DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			backgroundWorker1->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker1_RunWorkerCompleted);
			backgroundWorker1->ProgressChanged += gcnew ProgressChangedEventHandler( this, &MyForm::backgroundWorker1_ProgressChanged );
			//backgroundworker1->
		}*/

		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->qMinusButton = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->qSNColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UpdaterColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CurrColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CommColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MainContentTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->SearchFilterDrop = (gcnew System::Windows::Forms::ComboBox());
			this->searchForCombo = (gcnew System::Windows::Forms::ComboBox());
			this->clearSearchButton = (gcnew System::Windows::Forms::Button());
			this->searchLabelTxt = (gcnew System::Windows::Forms::Label());
			this->ControlPanel1 = (gcnew System::Windows::Forms::Panel());
			this->newMachineButton = (gcnew System::Windows::Forms::Button());
			this->batchTest = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->InvListView = (gcnew System::Windows::Forms::ListView());
			this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->displayingTextLabel = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->topPlusBtn = (gcnew System::Windows::Forms::Button());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->assetInfoBox24 = (gcnew System::Windows::Forms::TextBox());
			this->editPlusButton = (gcnew System::Windows::Forms::Button());
			this->assetInfoBox23 = (gcnew System::Windows::Forms::TextBox());
			this->editThisMachineButton = (gcnew System::Windows::Forms::Button());
			this->assetInfoBox22 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox21 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox11 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoLabel11 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel12 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel13 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel24 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel23 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel22 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel21 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel16 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel15 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel14 = (gcnew System::Windows::Forms::Label());
			this->assetInfoBox13 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox12 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoLabel25 = (gcnew System::Windows::Forms::Label());
			this->assetInfoLabel26 = (gcnew System::Windows::Forms::Label());
			this->assetInfoBox14 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox15 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox16 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox25 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoBox26 = (gcnew System::Windows::Forms::TextBox());
			this->assetInfoLabel = (gcnew System::Windows::Forms::Label());
			this->editQueueLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->editBatchButton = (gcnew System::Windows::Forms::Button());
			this->ClearListButton = (gcnew System::Windows::Forms::Button());
			this->queueGridView = (gcnew System::Windows::Forms::DataGridView());
			this->minusColumn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->qSNC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qInvC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MessagesButton = (gcnew System::Windows::Forms::Button());
			this->computerBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileMenubutton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSettingsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listSettingMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferencesSettingMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checksSettingMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginLogout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->termsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripAboutButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->hardDrivesButton = (gcnew System::Windows::Forms::Button());
			this->usersButton = (gcnew System::Windows::Forms::Button());
			this->mainMenuBtn = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->progressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->bottomLeftStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->bottomLeftMessageStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->MainContentTable->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->ControlPanel1->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel18->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queueGridView))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// qMinusButton
			// 
			this->qMinusButton->HeaderText = L"-";
			this->qMinusButton->Name = L"qMinusButton";
			this->qMinusButton->ReadOnly = true;
			// 
			// qSNColumn
			// 
			this->qSNColumn->HeaderText = L"S/N";
			this->qSNColumn->Name = L"qSNColumn";
			this->qSNColumn->ReadOnly = true;
			// 
			// UpdaterColumn
			// 
			this->UpdaterColumn->HeaderText = L"Updater";
			this->UpdaterColumn->Name = L"UpdaterColumn";
			this->UpdaterColumn->ReadOnly = true;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(123, 45);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// CurrColumn
			// 
			this->CurrColumn->HeaderText = L"Curr";
			this->CurrColumn->Name = L"CurrColumn";
			this->CurrColumn->ReadOnly = true;
			this->CurrColumn->Visible = false;
			this->CurrColumn->Width = 30;
			// 
			// CommColumn
			// 
			this->CommColumn->HeaderText = L"Comments";
			this->CommColumn->Name = L"CommColumn";
			this->CommColumn->ReadOnly = true;
			// 
			// MainContentTable
			// 
			this->MainContentTable->ColumnCount = 3;
			this->MainContentTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				350)));
			this->MainContentTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MainContentTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				350)));
			this->MainContentTable->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->MainContentTable->Controls->Add(this->tableLayoutPanel8, 1, 0);
			this->MainContentTable->Controls->Add(this->tableLayoutPanel9, 2, 0);
			this->MainContentTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainContentTable->Location = System::Drawing::Point(3, 63);
			this->MainContentTable->Name = L"MainContentTable";
			this->MainContentTable->RowCount = 1;
			this->MainContentTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->MainContentTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 1041)));
			this->MainContentTable->Size = System::Drawing::Size(1677, 1041);
			this->MainContentTable->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->ControlPanel1, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 200)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 200)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 215)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(344, 1035);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel4->ColumnCount = 5;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				115)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				115)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->SearchButton, 3, 3);
			this->tableLayoutPanel4->Controls->Add(this->SearchFilterDrop, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->searchForCombo, 2, 2);
			this->tableLayoutPanel4->Controls->Add(this->clearSearchButton, 1, 3);
			this->tableLayoutPanel4->Controls->Add(this->searchLabelTxt, 1, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 7;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(338, 194);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// SearchButton
			// 
			this->SearchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SearchButton->Location = System::Drawing::Point(214, 84);
			this->SearchButton->Margin = System::Windows::Forms::Padding(5);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(105, 25);
			this->SearchButton->TabIndex = 3;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MyForm::SearchButton_Click);
			// 
			// SearchFilterDrop
			// 
			this->SearchFilterDrop->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->SearchFilterDrop->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->SearchFilterDrop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SearchFilterDrop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchFilterDrop->FormattingEnabled = true;
			this->SearchFilterDrop->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Serial Number", L"Inventory Tag", L"Brand",
					L"Model", L"Name", L"Status", L"User", L"Department", L"Location", L"Type", L"Updater"
			});
			this->SearchFilterDrop->Location = System::Drawing::Point(20, 50);
			this->SearchFilterDrop->Margin = System::Windows::Forms::Padding(6);
			this->SearchFilterDrop->Name = L"SearchFilterDrop";
			this->SearchFilterDrop->Size = System::Drawing::Size(103, 21);
			this->SearchFilterDrop->TabIndex = 0;
			this->SearchFilterDrop->Text = L"Search By";
			this->SearchFilterDrop->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SearchFilterDrop_SelectedIndexChanged);
			// 
			// searchForCombo
			// 
			this->searchForCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->searchForCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->tableLayoutPanel4->SetColumnSpan(this->searchForCombo, 2);
			this->searchForCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchForCombo->FormattingEnabled = true;
			this->searchForCombo->Location = System::Drawing::Point(135, 50);
			this->searchForCombo->Margin = System::Windows::Forms::Padding(6);
			this->searchForCombo->Name = L"searchForCombo";
			this->searchForCombo->Size = System::Drawing::Size(183, 21);
			this->searchForCombo->TabIndex = 7;
			// 
			// clearSearchButton
			// 
			this->clearSearchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->clearSearchButton->Location = System::Drawing::Point(19, 84);
			this->clearSearchButton->Margin = System::Windows::Forms::Padding(5);
			this->clearSearchButton->Name = L"clearSearchButton";
			this->clearSearchButton->Size = System::Drawing::Size(105, 25);
			this->clearSearchButton->TabIndex = 1;
			this->clearSearchButton->Text = L"Clear Search";
			this->clearSearchButton->UseVisualStyleBackColor = true;
			this->clearSearchButton->Click += gcnew System::EventHandler(this, &MyForm::clearSearchButton_Click);
			// 
			// searchLabelTxt
			// 
			this->searchLabelTxt->AutoSize = true;
			this->tableLayoutPanel4->SetColumnSpan(this->searchLabelTxt, 3);
			this->searchLabelTxt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchLabelTxt->Location = System::Drawing::Point(17, 9);
			this->searchLabelTxt->Name = L"searchLabelTxt";
			this->searchLabelTxt->Size = System::Drawing::Size(304, 35);
			this->searchLabelTxt->TabIndex = 11;
			this->searchLabelTxt->Text = L"Search";
			this->searchLabelTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ControlPanel1
			// 
			this->ControlPanel1->Controls->Add(this->newMachineButton);
			this->ControlPanel1->Controls->Add(this->batchTest);
			this->ControlPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ControlPanel1->Location = System::Drawing::Point(3, 413);
			this->ControlPanel1->Name = L"ControlPanel1";
			this->ControlPanel1->Size = System::Drawing::Size(338, 194);
			this->ControlPanel1->TabIndex = 5;
			// 
			// newMachineButton
			// 
			this->newMachineButton->Location = System::Drawing::Point(21, 64);
			this->newMachineButton->Margin = System::Windows::Forms::Padding(5);
			this->newMachineButton->Name = L"newMachineButton";
			this->newMachineButton->Size = System::Drawing::Size(89, 25);
			this->newMachineButton->TabIndex = 5;
			this->newMachineButton->Text = L"New Machine";
			this->newMachineButton->UseVisualStyleBackColor = true;
			this->newMachineButton->Click += gcnew System::EventHandler(this, &MyForm::newMachineButton_Click);
			// 
			// batchTest
			// 
			this->batchTest->Location = System::Drawing::Point(18, 16);
			this->batchTest->Margin = System::Windows::Forms::Padding(2);
			this->batchTest->Name = L"batchTest";
			this->batchTest->Size = System::Drawing::Size(92, 30);
			this->batchTest->TabIndex = 6;
			this->batchTest->Text = L"Batch";
			this->batchTest->UseVisualStyleBackColor = true;
			this->batchTest->Click += gcnew System::EventHandler(this, &MyForm::batchTest_Click);
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->InvListView, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->tableLayoutPanel18, 0, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(353, 3);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(971, 1035);
			this->tableLayoutPanel8->TabIndex = 2;
			// 
			// InvListView
			// 
			this->InvListView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InvListView->Location = System::Drawing::Point(3, 38);
			this->InvListView->Name = L"InvListView";
			this->InvListView->Size = System::Drawing::Size(965, 994);
			this->InvListView->TabIndex = 2;
			this->InvListView->UseCompatibleStateImageBehavior = false;
			this->InvListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::InvListView_DoubleClick);
			// 
			// tableLayoutPanel18
			// 
			this->tableLayoutPanel18->ColumnCount = 5;
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				250)));
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel18->Controls->Add(this->displayingTextLabel, 1, 0);
			this->tableLayoutPanel18->Controls->Add(this->backBtn, 0, 0);
			this->tableLayoutPanel18->Controls->Add(this->topPlusBtn, 4, 0);
			this->tableLayoutPanel18->Controls->Add(this->viewBtn, 3, 0);
			this->tableLayoutPanel18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel18->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
			this->tableLayoutPanel18->RowCount = 1;
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel18->Size = System::Drawing::Size(965, 29);
			this->tableLayoutPanel18->TabIndex = 3;
			// 
			// displayingTextLabel
			// 
			this->displayingTextLabel->AutoSize = true;
			this->displayingTextLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->displayingTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->displayingTextLabel->Location = System::Drawing::Point(78, 0);
			this->displayingTextLabel->Name = L"displayingTextLabel";
			this->displayingTextLabel->Size = System::Drawing::Size(244, 29);
			this->displayingTextLabel->TabIndex = 1;
			this->displayingTextLabel->Text = L"label2";
			this->displayingTextLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// backBtn
			// 
			this->backBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->backBtn->Location = System::Drawing::Point(3, 3);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(69, 23);
			this->backBtn->TabIndex = 0;
			this->backBtn->Text = L"Back";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyForm::backBtn_Click);
			// 
			// topPlusBtn
			// 
			this->topPlusBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->topPlusBtn->Location = System::Drawing::Point(868, 3);
			this->topPlusBtn->Name = L"topPlusBtn";
			this->topPlusBtn->Size = System::Drawing::Size(94, 23);
			this->topPlusBtn->TabIndex = 2;
			this->topPlusBtn->Text = L"+";
			this->topPlusBtn->UseVisualStyleBackColor = true;
			this->topPlusBtn->Click += gcnew System::EventHandler(this, &MyForm::topPlusBtn_Click);
			// 
			// viewBtn
			// 
			this->viewBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->viewBtn->Location = System::Drawing::Point(768, 3);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->Size = System::Drawing::Size(94, 23);
			this->viewBtn->TabIndex = 3;
			this->viewBtn->Text = L"View";
			this->viewBtn->UseVisualStyleBackColor = true;
			this->viewBtn->Click += gcnew System::EventHandler(this, &MyForm::viewBtn_Click_1);
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->assetInfoLabel, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->editQueueLabel, 0, 5);
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel10, 0, 6);
			this->tableLayoutPanel9->Controls->Add(this->queueGridView, 0, 7);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(1330, 3);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 9;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 215)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 230)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 235)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(344, 1035);
			this->tableLayoutPanel9->TabIndex = 3;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->AutoSize = true;
			this->tableLayoutPanel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel3->ColumnCount = 6;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				90)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				90)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox24, 4, 3);
			this->tableLayoutPanel3->Controls->Add(this->editPlusButton, 1, 6);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox23, 4, 2);
			this->tableLayoutPanel3->Controls->Add(this->editThisMachineButton, 4, 6);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox22, 4, 1);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox21, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox11, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel11, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel12, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel13, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel24, 3, 3);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel23, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel22, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel21, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel16, 1, 5);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel15, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel14, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox13, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox12, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel25, 3, 4);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoLabel26, 3, 5);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox14, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox15, 2, 4);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox16, 2, 5);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox25, 4, 4);
			this->tableLayoutPanel3->Controls->Add(this->assetInfoBox26, 4, 5);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 43);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 7;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(338, 209);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// assetInfoBox24
			// 
			this->assetInfoBox24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox24->Location = System::Drawing::Point(254, 95);
			this->assetInfoBox24->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox24->Name = L"assetInfoBox24";
			this->assetInfoBox24->ReadOnly = true;
			this->assetInfoBox24->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox24->TabIndex = 48;
			// 
			// editPlusButton
			// 
			this->editPlusButton->Location = System::Drawing::Point(2, 183);
			this->editPlusButton->Name = L"editPlusButton";
			this->editPlusButton->Size = System::Drawing::Size(74, 24);
			this->editPlusButton->TabIndex = 51;
			this->editPlusButton->Text = L"+";
			this->editPlusButton->UseVisualStyleBackColor = true;
			this->editPlusButton->Click += gcnew System::EventHandler(this, &MyForm::editPlusButton_Click);
			// 
			// assetInfoBox23
			// 
			this->assetInfoBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox23->Location = System::Drawing::Point(254, 65);
			this->assetInfoBox23->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox23->Name = L"assetInfoBox23";
			this->assetInfoBox23->ReadOnly = true;
			this->assetInfoBox23->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox23->TabIndex = 47;
			// 
			// editThisMachineButton
			// 
			this->editThisMachineButton->Location = System::Drawing::Point(254, 185);
			this->editThisMachineButton->Margin = System::Windows::Forms::Padding(5);
			this->editThisMachineButton->Name = L"editThisMachineButton";
			this->editThisMachineButton->Size = System::Drawing::Size(80, 20);
			this->editThisMachineButton->TabIndex = 33;
			this->editThisMachineButton->Text = L"Edit";
			this->editThisMachineButton->UseVisualStyleBackColor = true;
			this->editThisMachineButton->Click += gcnew System::EventHandler(this, &MyForm::editThisMachineButton_Click);
			// 
			// assetInfoBox22
			// 
			this->assetInfoBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox22->Location = System::Drawing::Point(254, 35);
			this->assetInfoBox22->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox22->Name = L"assetInfoBox22";
			this->assetInfoBox22->ReadOnly = true;
			this->assetInfoBox22->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox22->TabIndex = 46;
			// 
			// assetInfoBox21
			// 
			this->assetInfoBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox21->Location = System::Drawing::Point(254, 5);
			this->assetInfoBox21->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox21->Name = L"assetInfoBox21";
			this->assetInfoBox21->ReadOnly = true;
			this->assetInfoBox21->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox21->TabIndex = 45;
			// 
			// assetInfoBox11
			// 
			this->assetInfoBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assetInfoBox11->Location = System::Drawing::Point(84, 5);
			this->assetInfoBox11->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox11->Name = L"assetInfoBox11";
			this->assetInfoBox11->ReadOnly = true;
			this->assetInfoBox11->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox11->TabIndex = 12;
			// 
			// assetInfoLabel11
			// 
			this->assetInfoLabel11->AutoSize = true;
			this->assetInfoLabel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel11->Location = System::Drawing::Point(4, 5);
			this->assetInfoLabel11->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel11->Name = L"assetInfoLabel11";
			this->assetInfoLabel11->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel11->TabIndex = 0;
			this->assetInfoLabel11->Text = L"Label11";
			this->assetInfoLabel11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel12
			// 
			this->assetInfoLabel12->AutoSize = true;
			this->assetInfoLabel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel12->Location = System::Drawing::Point(4, 35);
			this->assetInfoLabel12->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel12->Name = L"assetInfoLabel12";
			this->assetInfoLabel12->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel12->TabIndex = 1;
			this->assetInfoLabel12->Text = L"Label12";
			this->assetInfoLabel12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel13
			// 
			this->assetInfoLabel13->AutoSize = true;
			this->assetInfoLabel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel13->Location = System::Drawing::Point(4, 65);
			this->assetInfoLabel13->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel13->Name = L"assetInfoLabel13";
			this->assetInfoLabel13->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel13->TabIndex = 6;
			this->assetInfoLabel13->Text = L"Label13";
			this->assetInfoLabel13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel24
			// 
			this->assetInfoLabel24->AutoSize = true;
			this->assetInfoLabel24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel24->Location = System::Drawing::Point(174, 95);
			this->assetInfoLabel24->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel24->Name = L"assetInfoLabel24";
			this->assetInfoLabel24->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel24->TabIndex = 4;
			this->assetInfoLabel24->Text = L"Label24";
			this->assetInfoLabel24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel23
			// 
			this->assetInfoLabel23->AutoSize = true;
			this->assetInfoLabel23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel23->Location = System::Drawing::Point(174, 65);
			this->assetInfoLabel23->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel23->Name = L"assetInfoLabel23";
			this->assetInfoLabel23->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel23->TabIndex = 2;
			this->assetInfoLabel23->Text = L"Label23";
			this->assetInfoLabel23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel22
			// 
			this->assetInfoLabel22->AutoSize = true;
			this->assetInfoLabel22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel22->Location = System::Drawing::Point(174, 35);
			this->assetInfoLabel22->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel22->Name = L"assetInfoLabel22";
			this->assetInfoLabel22->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel22->TabIndex = 5;
			this->assetInfoLabel22->Text = L"Label22";
			this->assetInfoLabel22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel21
			// 
			this->assetInfoLabel21->AutoSize = true;
			this->assetInfoLabel21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel21->Location = System::Drawing::Point(174, 5);
			this->assetInfoLabel21->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel21->Name = L"assetInfoLabel21";
			this->assetInfoLabel21->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel21->TabIndex = 7;
			this->assetInfoLabel21->Text = L"Label21";
			this->assetInfoLabel21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel16
			// 
			this->assetInfoLabel16->AutoSize = true;
			this->assetInfoLabel16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel16->Location = System::Drawing::Point(4, 155);
			this->assetInfoLabel16->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel16->Name = L"assetInfoLabel16";
			this->assetInfoLabel16->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel16->TabIndex = 3;
			this->assetInfoLabel16->Text = L"Label16";
			this->assetInfoLabel16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel15
			// 
			this->assetInfoLabel15->AutoSize = true;
			this->assetInfoLabel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel15->Location = System::Drawing::Point(4, 125);
			this->assetInfoLabel15->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel15->Name = L"assetInfoLabel15";
			this->assetInfoLabel15->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel15->TabIndex = 8;
			this->assetInfoLabel15->Text = L"Label15";
			this->assetInfoLabel15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel14
			// 
			this->assetInfoLabel14->AutoSize = true;
			this->assetInfoLabel14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel14->Location = System::Drawing::Point(4, 95);
			this->assetInfoLabel14->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel14->Name = L"assetInfoLabel14";
			this->assetInfoLabel14->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel14->TabIndex = 9;
			this->assetInfoLabel14->Text = L"Label14";
			this->assetInfoLabel14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoBox13
			// 
			this->assetInfoBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assetInfoBox13->Location = System::Drawing::Point(84, 65);
			this->assetInfoBox13->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox13->Name = L"assetInfoBox13";
			this->assetInfoBox13->ReadOnly = true;
			this->assetInfoBox13->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox13->TabIndex = 10;
			// 
			// assetInfoBox12
			// 
			this->assetInfoBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assetInfoBox12->Location = System::Drawing::Point(84, 35);
			this->assetInfoBox12->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox12->Name = L"assetInfoBox12";
			this->assetInfoBox12->ReadOnly = true;
			this->assetInfoBox12->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox12->TabIndex = 11;
			// 
			// assetInfoLabel25
			// 
			this->assetInfoLabel25->AutoSize = true;
			this->assetInfoLabel25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel25->Location = System::Drawing::Point(174, 125);
			this->assetInfoLabel25->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel25->Name = L"assetInfoLabel25";
			this->assetInfoLabel25->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel25->TabIndex = 27;
			this->assetInfoLabel25->Text = L"Label25";
			this->assetInfoLabel25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoLabel26
			// 
			this->assetInfoLabel26->AutoSize = true;
			this->assetInfoLabel26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->assetInfoLabel26->Location = System::Drawing::Point(174, 155);
			this->assetInfoLabel26->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoLabel26->Name = L"assetInfoLabel26";
			this->assetInfoLabel26->Size = System::Drawing::Size(70, 20);
			this->assetInfoLabel26->TabIndex = 28;
			this->assetInfoLabel26->Text = L"Label26";
			this->assetInfoLabel26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// assetInfoBox14
			// 
			this->assetInfoBox14->Location = System::Drawing::Point(84, 95);
			this->assetInfoBox14->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox14->Name = L"assetInfoBox14";
			this->assetInfoBox14->ReadOnly = true;
			this->assetInfoBox14->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox14->TabIndex = 34;
			// 
			// assetInfoBox15
			// 
			this->assetInfoBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox15->Location = System::Drawing::Point(84, 125);
			this->assetInfoBox15->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox15->Name = L"assetInfoBox15";
			this->assetInfoBox15->ReadOnly = true;
			this->assetInfoBox15->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox15->TabIndex = 35;
			// 
			// assetInfoBox16
			// 
			this->assetInfoBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox16->Location = System::Drawing::Point(84, 155);
			this->assetInfoBox16->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox16->Name = L"assetInfoBox16";
			this->assetInfoBox16->ReadOnly = true;
			this->assetInfoBox16->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox16->TabIndex = 43;
			// 
			// assetInfoBox25
			// 
			this->assetInfoBox25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox25->Location = System::Drawing::Point(254, 125);
			this->assetInfoBox25->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox25->Name = L"assetInfoBox25";
			this->assetInfoBox25->ReadOnly = true;
			this->assetInfoBox25->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox25->TabIndex = 49;
			// 
			// assetInfoBox26
			// 
			this->assetInfoBox26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoBox26->Location = System::Drawing::Point(254, 155);
			this->assetInfoBox26->Margin = System::Windows::Forms::Padding(5);
			this->assetInfoBox26->Name = L"assetInfoBox26";
			this->assetInfoBox26->ReadOnly = true;
			this->assetInfoBox26->Size = System::Drawing::Size(80, 20);
			this->assetInfoBox26->TabIndex = 50;
			// 
			// assetInfoLabel
			// 
			this->assetInfoLabel->AutoSize = true;
			this->assetInfoLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->assetInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assetInfoLabel->Location = System::Drawing::Point(3, 0);
			this->assetInfoLabel->Name = L"assetInfoLabel";
			this->assetInfoLabel->Size = System::Drawing::Size(338, 40);
			this->assetInfoLabel->TabIndex = 1;
			this->assetInfoLabel->Text = L"Info";
			this->assetInfoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// editQueueLabel
			// 
			this->editQueueLabel->AutoSize = true;
			this->editQueueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editQueueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editQueueLabel->Location = System::Drawing::Point(3, 715);
			this->editQueueLabel->Name = L"editQueueLabel";
			this->editQueueLabel->Size = System::Drawing::Size(338, 40);
			this->editQueueLabel->TabIndex = 2;
			this->editQueueLabel->Text = L"Edit Queue";
			this->editQueueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel10->Controls->Add(this->editBatchButton, 1, 0);
			this->tableLayoutPanel10->Controls->Add(this->ClearListButton, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(0, 755);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(344, 30);
			this->tableLayoutPanel10->TabIndex = 3;
			// 
			// editBatchButton
			// 
			this->editBatchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editBatchButton->Location = System::Drawing::Point(175, 3);
			this->editBatchButton->Name = L"editBatchButton";
			this->editBatchButton->Size = System::Drawing::Size(166, 24);
			this->editBatchButton->TabIndex = 0;
			this->editBatchButton->Text = L"Edit All";
			this->editBatchButton->UseVisualStyleBackColor = true;
			this->editBatchButton->Click += gcnew System::EventHandler(this, &MyForm::editBatchButton_Click_1);
			// 
			// ClearListButton
			// 
			this->ClearListButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClearListButton->Location = System::Drawing::Point(3, 3);
			this->ClearListButton->Name = L"ClearListButton";
			this->ClearListButton->Size = System::Drawing::Size(166, 24);
			this->ClearListButton->TabIndex = 1;
			this->ClearListButton->Text = L"Clear List";
			this->ClearListButton->UseVisualStyleBackColor = true;
			this->ClearListButton->Click += gcnew System::EventHandler(this, &MyForm::ClearListButton_Click_1);
			// 
			// queueGridView
			// 
			this->queueGridView->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->queueGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->queueGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->queueGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->queueGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->minusColumn,
					this->qSNC, this->qInvC
			});
			this->queueGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->queueGridView->Location = System::Drawing::Point(3, 788);
			this->queueGridView->Name = L"queueGridView";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->queueGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->queueGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->queueGridView->Size = System::Drawing::Size(338, 229);
			this->queueGridView->TabIndex = 4;
			this->queueGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::queueGridView_CellContentClick_1);
			// 
			// minusColumn
			// 
			this->minusColumn->HeaderText = L"-";
			this->minusColumn->Name = L"minusColumn";
			this->minusColumn->ReadOnly = true;
			this->minusColumn->ToolTipText = L"Remove from Queue";
			this->minusColumn->Width = 25;
			// 
			// qSNC
			// 
			this->qSNC->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->qSNC->HeaderText = L"S/N";
			this->qSNC->Name = L"qSNC";
			this->qSNC->ReadOnly = true;
			// 
			// qInvC
			// 
			this->qInvC->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->qInvC->HeaderText = L"Inv Tag";
			this->qInvC->Name = L"qInvC";
			this->qInvC->ReadOnly = true;
			// 
			// MessagesButton
			// 
			this->MessagesButton->Location = System::Drawing::Point(1563, 5);
			this->MessagesButton->Margin = System::Windows::Forms::Padding(5);
			this->MessagesButton->Name = L"MessagesButton";
			this->MessagesButton->Size = System::Drawing::Size(100, 25);
			this->MessagesButton->TabIndex = 6;
			this->MessagesButton->Text = L"Messages";
			this->MessagesButton->UseVisualStyleBackColor = true;
			this->MessagesButton->Click += gcnew System::EventHandler(this, &MyForm::messagesBtn_Click);
			// 
			// computerBtn
			// 
			this->computerBtn->Location = System::Drawing::Point(130, 5);
			this->computerBtn->Margin = System::Windows::Forms::Padding(5);
			this->computerBtn->Name = L"computerBtn";
			this->computerBtn->Size = System::Drawing::Size(100, 25);
			this->computerBtn->TabIndex = 4;
			this->computerBtn->Text = L"Computers";
			this->computerBtn->UseVisualStyleBackColor = true;
			this->computerBtn->Click += gcnew System::EventHandler(this, &MyForm::computerBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->FileMenubutton, this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1683, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileMenubutton
			// 
			this->FileMenubutton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileSettingsMenu,
					this->loginLogout
			});
			this->FileMenubutton->Name = L"FileMenubutton";
			this->FileMenubutton->Size = System::Drawing::Size(37, 20);
			this->FileMenubutton->Text = L"File";
			// 
			// fileSettingsMenu
			// 
			this->fileSettingsMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->listSettingMenuButton,
					this->preferencesSettingMenuButton, this->checksSettingMenuButton
			});
			this->fileSettingsMenu->Name = L"fileSettingsMenu";
			this->fileSettingsMenu->Size = System::Drawing::Size(116, 22);
			this->fileSettingsMenu->Text = L"Settings";
			// 
			// listSettingMenuButton
			// 
			this->listSettingMenuButton->Name = L"listSettingMenuButton";
			this->listSettingMenuButton->Size = System::Drawing::Size(135, 22);
			this->listSettingMenuButton->Text = L"Lists";
			this->listSettingMenuButton->Click += gcnew System::EventHandler(this, &MyForm::listSettingMenuButton_Click);
			// 
			// preferencesSettingMenuButton
			// 
			this->preferencesSettingMenuButton->Name = L"preferencesSettingMenuButton";
			this->preferencesSettingMenuButton->Size = System::Drawing::Size(135, 22);
			this->preferencesSettingMenuButton->Text = L"Preferences";
			this->preferencesSettingMenuButton->Click += gcnew System::EventHandler(this, &MyForm::preferencesSettingMenuButton_Click);
			// 
			// checksSettingMenuButton
			// 
			this->checksSettingMenuButton->Name = L"checksSettingMenuButton";
			this->checksSettingMenuButton->Size = System::Drawing::Size(135, 22);
			this->checksSettingMenuButton->Text = L"Checks";
			// 
			// loginLogout
			// 
			this->loginLogout->Name = L"loginLogout";
			this->loginLogout->Size = System::Drawing::Size(116, 22);
			this->loginLogout->Text = L"Login";
			this->loginLogout->Click += gcnew System::EventHandler(this, &MyForm::loginLogout_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->termsToolStripMenuItem,
					this->toolStripAboutButton, this->supportToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// termsToolStripMenuItem
			// 
			this->termsToolStripMenuItem->Name = L"termsToolStripMenuItem";
			this->termsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->termsToolStripMenuItem->Text = L"Terms";
			// 
			// toolStripAboutButton
			// 
			this->toolStripAboutButton->Name = L"toolStripAboutButton";
			this->toolStripAboutButton->Size = System::Drawing::Size(116, 22);
			this->toolStripAboutButton->Text = L"About";
			this->toolStripAboutButton->Click += gcnew System::EventHandler(this, &MyForm::toolStripAboutButton_Click);
			// 
			// supportToolStripMenuItem
			// 
			this->supportToolStripMenuItem->Name = L"supportToolStripMenuItem";
			this->supportToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->supportToolStripMenuItem->Text = L"Support";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->menuStrip1, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->MainContentTable, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel11, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->statusStrip1, 0, 3);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 4;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(1683, 1132);
			this->tableLayoutPanel6->TabIndex = 5;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 13;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel11->Controls->Add(this->MessagesButton, 11, 0);
			this->tableLayoutPanel11->Controls->Add(this->computerBtn, 2, 0);
			this->tableLayoutPanel11->Controls->Add(this->hardDrivesButton, 3, 0);
			this->tableLayoutPanel11->Controls->Add(this->usersButton, 4, 0);
			this->tableLayoutPanel11->Controls->Add(this->mainMenuBtn, 1, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(0, 25);
			this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(1683, 35);
			this->tableLayoutPanel11->TabIndex = 4;
			// 
			// hardDrivesButton
			// 
			this->hardDrivesButton->Location = System::Drawing::Point(240, 5);
			this->hardDrivesButton->Margin = System::Windows::Forms::Padding(5);
			this->hardDrivesButton->Name = L"hardDrivesButton";
			this->hardDrivesButton->Size = System::Drawing::Size(100, 25);
			this->hardDrivesButton->TabIndex = 5;
			this->hardDrivesButton->Text = L"Hard Drives";
			this->hardDrivesButton->UseVisualStyleBackColor = true;
			this->hardDrivesButton->Click += gcnew System::EventHandler(this, &MyForm::hardDrivesButton_Click);
			// 
			// usersButton
			// 
			this->usersButton->Location = System::Drawing::Point(350, 5);
			this->usersButton->Margin = System::Windows::Forms::Padding(5);
			this->usersButton->Name = L"usersButton";
			this->usersButton->Size = System::Drawing::Size(100, 25);
			this->usersButton->TabIndex = 7;
			this->usersButton->Text = L"Users";
			this->usersButton->UseVisualStyleBackColor = true;
			this->usersButton->Click += gcnew System::EventHandler(this, &MyForm::usersButton_Click);
			// 
			// mainMenuBtn
			// 
			this->mainMenuBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainMenuBtn->Location = System::Drawing::Point(20, 5);
			this->mainMenuBtn->Margin = System::Windows::Forms::Padding(5);
			this->mainMenuBtn->Name = L"mainMenuBtn";
			this->mainMenuBtn->Size = System::Drawing::Size(100, 25);
			this->mainMenuBtn->TabIndex = 8;
			this->mainMenuBtn->Text = L"Main Menu";
			this->mainMenuBtn->UseVisualStyleBackColor = true;
			this->mainMenuBtn->Click += gcnew System::EventHandler(this, &MyForm::mainMenuBtn_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->progressBar1, this->bottomLeftStatus,
					this->bottomLeftMessageStatus
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 1110);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1683, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// progressBar1
			// 
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// bottomLeftStatus
			// 
			this->bottomLeftStatus->Name = L"bottomLeftStatus";
			this->bottomLeftStatus->Size = System::Drawing::Size(118, 17);
			this->bottomLeftStatus->Text = L"toolStripStatusLabel1";
			// 
			// bottomLeftMessageStatus
			// 
			this->bottomLeftMessageStatus->Name = L"bottomLeftMessageStatus";
			this->bottomLeftMessageStatus->Size = System::Drawing::Size(118, 17);
			this->bottomLeftMessageStatus->Text = L"toolStripStatusLabel2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 1132);
			this->Controls->Add(this->tableLayoutPanel6);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Inventory";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MainContentTable->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ControlPanel1->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel18->ResumeLayout(false);
			this->tableLayoutPanel18->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queueGridView))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion


private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	getSettingsFromFile();
	loggedIn = false;
	loginWindowForm ^ logF = gcnew loginWindowForm;
	logF->setStruct = settingsStruct;
	logF->ShowDialog();
	loggedIn = logF->loggedIn;
	if (!loggedIn) {
		this->Close();
		return;
	}
	this->WindowState = FormWindowState::Maximized;
	SearchFilterDrop->Items->Clear();
	settingsStruct.lastServerAddr = logF->servAddTextbox->Text;
	settingsStruct.lastPort = logF->portTextbox->Text;
	settingsStruct.lastDBName = logF->dbNameTextbox->Text;
	settingsStruct.lastDBUser = logF->dbUsernameTextbox->Text;
	settingsStruct.lastUser = logF->usernameTextBox->Text;
	settingsStruct.lastDBPass = logF->servPassTextbox->Text;
	settingsStruct.lastPassword = logF->userPassTextBox->Text;
	usernameString = logF->usernameTextBox->Text;
	serverStr1 = logF->servStr;
	settingsStruct.servStr = serverStr1;
	wipeSettingsTxtFile();
	writeSettingsToFile(settingsStruct);
	userPassStr = logF->servPassTextbox->Text;
	backB = false;
	nextScrn = "MainMenu";
	currentScrn = "MainMenu";
	updateUI();



}

public: System::Void getSettingsFromFile() {
	String ^ delimStr = ";";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	String^ fileName = "data\\settings.txt";
	if (!File::Exists(fileName))
	{
		return;
	}
	StreamReader^ sr = File::OpenText(fileName);
	String^ input, ^ s;
	while ((input = sr->ReadLine()) != nullptr)
	{
		s = input;
	}
	array<String^>^ sepStr = s->Split(delimiCar);
	if (sepStr->Length > 8) {
		settingsStruct.color = sepStr[0];
		settingsStruct.leftColWid = sepStr[1];
		settingsStruct.midColWid = sepStr[2];
		settingsStruct.rightColWid = sepStr[3];
		settingsStruct.lastServerAddr = sepStr[4];
		settingsStruct.lastPort = sepStr[5];
		settingsStruct.lastDBName = sepStr[6];
		settingsStruct.lastDBUser = sepStr[7];
		settingsStruct.lastDBPass = sepStr[8];
		settingsStruct.lastUser = sepStr[9];
		settingsStruct.lastPassword = sepStr[10];
	}
	sr->Close();
}

public: System::Void wipeSettingsTxtFile() {
	String ^ fileName = "data/settings.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName);
	String ^ userString = ";";
	sw->WriteLine(userString);
	sw->Close();
}

public: System::Void setListViewForMachineHistory() {
	InvListView->Clear();
	InvListView->View = View::Details;
	InvListView->GridLines = true;
	InvListView->FullRowSelect = true;
	InvListView->Columns->Add("User Name", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Name", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Location", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Department", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Status", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Date Updated", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Updater", 100, HorizontalAlignment::Center);
	InvListView->Columns->Add("Coments", -2);
}




public: System::Void setListViewForCurrMachines() {
	/*if (this->InvListView->InvokeRequired) {
		In
	}*/
	this->InvListView->Items->Clear();
	this->InvListView->View = View::Details;
	this->InvListView->GridLines = true;
	this->InvListView->FullRowSelect = true;
	this->InvListView->Columns->Add("S/N", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Inventory", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Model", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Type", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Status", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Users", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Department", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Location", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("LPI", 100, HorizontalAlignment::Center);
	this->InvListView->Columns->Add("Purchase", 100, HorizontalAlignment::Center);
}

public: System::Void viewCurrentEntries2() {
	/*String ^ statStr = "IN - In Service";
	int totalEn = 0;
	int passInt = 0;
	setListViewForCurrMachines();
	MySqlConnection^ conDB1 = gcnew MySqlConnection(serverStr1);
	MySqlCommand^ cmD1 = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' AND statuses_Statuss='"+statStr+"';", conDB1);
	MySqlDataReader ^ myReader1;
	conDB1->Open();
	myReader1 = cmD1->ExecuteReader();
	while (myReader1->Read()) {
		totalEn++;
	}
	//MessageBox::Show(totalEn.ToString(), "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	conDB1->Close();
	myReader1->Close();
	array <String^, 2> ^ mArr = gcnew array<String ^, 2>(totalEn, 10);*/
	/*array<String^>^ snRow = gcnew array<String^>(totalEn);
	array<String^>^ subA1 = gcnew array<String^>(totalEn);
	array<String^>^ subA2 = gcnew array<String^>(totalEn);
	array<String^>^ subA3 = gcnew array<String^>(totalEn);
	array<String^>^ subA4 = gcnew array<String^>(totalEn);
	array<String^>^ subA5 = gcnew array<String^>(totalEn);
	array<String^>^ subA6 = gcnew array<String^>(totalEn);
	array<String^>^ subA7 = gcnew array<String^>(totalEn);
	array<String^>^ subA8 = gcnew array<String^>(totalEn);
	array<String^>^ subA9 = gcnew array<String^>(totalEn);*/

	//InvListView->DoubleBuffered(true);
	//InvListView->DoubleBuffered(true);


	/*MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1'  AND statuses_Statuss='"+statStr+"' ORDER BY historyIndex DESC;", conDB);
	MySqlDataReader ^ myReader;
	try {
		conDB->Open();
		myReader = cmD->ExecuteReader();
		ListViewItem ^ lIt;

		while (myReader->Read()) {
			String ^ nameT = myReader->GetString(9);
			String ^ deptT = myReader->GetString(4);
			String ^ statT = myReader->GetString(1);
			String ^ locT = myReader->GetString(2);
			String ^ invT = getFieldFromMachines(myReader->GetString(0), "InventoryTag", serverStr1);
			String ^ snT = getFieldFromMachines(myReader->GetString(0), "SerialNumber", serverStr1);
			String ^ modT = getFieldFromMachines(myReader->GetString(0), "modelNumber", serverStr1);
			String ^ typeT = getFieldFromMachines(myReader->GetString(0), "machinetypes_TypeT", serverStr1);
			String ^ brandT = getFieldFromMachines(myReader->GetString(0), "machineBrands_Brands", serverStr1);
			String ^ dopT = getFieldFromMachines(myReader->GetString(0), "DateOfPurchase", serverStr1);
			String ^ commentT = myReader->GetString(8);
			String ^ currT = myReader->GetString(7);
			int currInt = myReader->GetInt32(7);
			String ^ usrStr = myReader->GetString(3);
			String ^ userName = getUserName(usrStr, serverStr1);
			String ^ dateUp = myReader->GetString(6);
			String ^ updater = myReader->GetString(10);
			String ^ userID = myReader->GetString(3);
			String ^ userN = getUserName(userID, serverStr1);*/

			/*snRow[passInt] = snT;
			subA1[passInt] = invT;//1 - InventoryTag
			subA2[passInt] = modT; //2 - ModelNum
			subA3[passInt] = typeT;//3 - Type
			subA4[passInt] = statT; //4 - Status
			subA5[passInt] = userName;//5 - Users
			subA6[passInt] = deptT;//7 - Dept
			subA7[passInt] = locT;//6 - Location
			subA8[passInt] = dateUp;//8 - Last date inventory
			subA9[passInt] = dopT;//9 - Date purchase};}
			*/

			/*mArr[passInt, 0] = snT;
			mArr[passInt, 1] = invT;//1 - InventoryTag
			mArr[passInt, 2] = modT; //2 - ModelNum
			mArr[passInt, 3] = typeT;//3 - Type
			mArr[passInt, 4] = statT; //4 - Status
			mArr[passInt, 5] = userName;//5 - Users
			mArr[passInt, 6] = deptT;//7 - Dept
			mArr[passInt, 7] = locT;//6 - Location
			mArr[passInt, 8] = dateUp;//8 - Last date inventory
			mArr[passInt, 9] = dopT;//9 - Date purchase};}


			passInt++;
		}

		setDisplayingTextLabel("Current Machines");
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at viewCurrentEntries2_2 in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	myReader->Close();
	conDB->Close();*/
	setListViewForCurrMachines();
	//MySqlConnection^ conDB1 = gcn
	//MessageBox::Show(WindowsFormsSynchronizationContext::Current->GetType()->Name);
	array <String^, 2> ^ mArr = gcnew array<String ^, 2>(totalMachinesCnt, 10);
	//backgroundWorker1->RunWorkerAsync();
	/*
	InvListView->BeginUpdate();

	for (int i = 0; i < totalEn; i++) {
		ListViewItem ^ lIt = gcnew ListViewItem(mArr[i, 0]);
		for (int n = 1; n < 10; n++) {
			//if (i != 0) {
				lIt->SubItems->Add(mArr[i, n]);
			//}
		}
		InvListView->Items->Add(lIt);
	}
	InvListView->EndUpdate();*/

	//ListViewItem ^ lIt;
	//lIt = gcnew ListViewItem(row);

	
	//this->Controls->Add(this->InvListView);
}



public: System::Void viewCurrentEntries() {

	setListViewForCurrMachines();

	
	
	//InvListView->DoubleBuffered(true);
	//InvListView->DoubleBuffered(true);
	InvListView->BeginUpdate();

	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' ORDER BY historyIndex DESC;", conDB);
	MySqlDataReader ^ myReader;
	try {
		conDB->Open();
		myReader = cmD->ExecuteReader();
		ListViewItem ^ lIt;
		while (myReader->Read()) {
			String ^ nameT = myReader->GetString(9);
			String ^ deptT = myReader->GetString(4);
			String ^ statT = myReader->GetString(1);
			String ^ locT = myReader->GetString(2);
			String ^ invT = getFieldFromMachines(myReader->GetString(0), "InventoryTag", serverStr1);
			String ^ snT = getFieldFromMachines(myReader->GetString(0), "SerialNumber", serverStr1);
			String ^ modT = getFieldFromMachines(myReader->GetString(0), "modelNumber", serverStr1);
			String ^ typeT = getFieldFromMachines(myReader->GetString(0), "machinetypes_TypeT", serverStr1);
			String ^ brandT = getFieldFromMachines(myReader->GetString(0), "machineBrands_Brands", serverStr1);
			String ^ dopT = getFieldFromMachines(myReader->GetString(0), "DateOfPurchase", serverStr1);
			String ^ commentT = myReader->GetString(8);
			String ^ currT = myReader->GetString(7);
			int currInt = myReader->GetInt32(7);
			String ^ usrStr = myReader->GetString(3);
			String ^ userName = getUserName(usrStr, serverStr1);
			String ^ dateUp = myReader->GetString(6);
			String ^ updater = myReader->GetString(10);
			//MessageBox::Show("1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			String ^ userID = myReader->GetString(3);
			String ^ userN = getUserName(userID, serverStr1);
			//MessageBox::Show("3", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			array<String^>^ row = { snT, //0 - SN
				invT,//1 - InventoryTag
				modT, //2 - ModelNum
				typeT,//3 - Type
				statT, //4 - Status
				userName,//5 - Users
				deptT,//7 - Dept
				locT,//6 - Location
				dateUp,//8 - Last date inventory
				dopT//9 - Date purchase};}
			};
			lIt = gcnew ListViewItem(row);
		
			InvListView->Items->Add(lIt);
			this->Controls->Add(this->InvListView);
		}

		setDisplayingTextLabel("Current Machines");
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at viewCurrentEntries in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	myReader->Close();
	conDB->Close();
	InvListView->EndUpdate();
}

public: System::Void viewMachineHistory(String ^ SNRef, Boolean isStatus, Boolean isSingle, String ^ commandStr, String ^ criteriaStr) {
	
	currentScrn = "History";
	scrnStack->Push("Computer");

	setListViewForMachineHistory();

	ListViewItem ^ lIt;

	String ^ tempDispStr;
	ListSortDirection sDir;
	sDir = ListSortDirection::Descending;
	tempDispStr = "Displaying History for Machine with " + criteriaStr + ": " + SNRef;

	if (criteriaStr == "User") {
		String ^ iD = getUserId(serverStr1, SNRef, settingsStruct.lastUser);
		SNRef = iD;
	}

	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	try {
		conDB->Open();
		MySqlCommand^ cmD = gcnew MySqlCommand(commandStr, conDB);
		MySqlDataReader ^ myReader;
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			String ^ nameT = myReader->GetString(9);
			String ^ deptT = myReader->GetString(4);
			String ^ statT = myReader->GetString(1);
			String ^ locT = myReader->GetString(2);
			String ^ invT = getFieldFromMachines(myReader->GetString(0), "InventoryTag", serverStr1);
			String ^ snT = getFieldFromMachines(myReader->GetString(0), "SerialNumber", serverStr1);
			String ^ modT = getFieldFromMachines(myReader->GetString(0), "modelNumber", serverStr1);
			String ^ typeT = getFieldFromMachines(myReader->GetString(0), "machinetypes_TypeT", serverStr1);
			String ^ brandT = getFieldFromMachines(myReader->GetString(0), "machineBrands_Brands", serverStr1);
			String ^ dopT = getFieldFromMachines(myReader->GetString(0), "DateOfPurchase", serverStr1);
			String ^ commentT = myReader->GetString(8);
			String ^ currT = myReader->GetString(7);
			int currInt = myReader->GetInt32(7);
			String ^ usrStr = myReader->GetString(3);
			String ^ userName = getUserName(usrStr, serverStr1);
			String ^ dateUp = myReader->GetString(6);
			String ^ updater = myReader->GetString(10);
			if (invT != nullptr && snT != nullptr && modT != nullptr && typeT != nullptr && brandT != nullptr && dopT != nullptr) {
				if (isSingle) {
					if (currInt == 1) {
						fillInputBoxes(invT, snT, modT, nameT, typeT, brandT, statT, locT, userName, deptT, dopT);
					}
					array<String^>^ row = { userName, nameT, locT, deptT, statT, dateUp, updater, commentT };
					lIt = gcnew ListViewItem(row);
					InvListView->Items->Add(lIt);
				}
				else if (!isSingle) {
					if (isStatus) {
						if (statT == SNRef || locT == SNRef || nameT == SNRef || usrStr == SNRef || deptT == SNRef) {
							if (currInt == 1) {

								array<String^>^ row = {snT, invT, modT, typeT, userName, locT, dateUp, deptT, dopT };
								lIt = gcnew ListViewItem(row);

								InvListView->Items->Add(lIt);
							}
						}
					}
				}
			}
		}
		conDB->Close();

		setDisplayingTextLabel(tempDispStr);
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at viewMachineHistory2 function!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void fillInputBoxes(String ^ InvR, String ^ SNR, String ^ ModelR, String ^ NameR, String ^ TypeR, 
						String ^ BrandR, String ^ StatusR, String ^ LocR, String ^ UserR, String ^ DeptR, String ^ DOPR) {
	assetInfoBox11->Text = InvR;
	assetInfoBox12->Text = SNR;
	assetInfoBox14->Text = ModelR;
	assetInfoBox13->Text = NameR;
	assetInfoBox15->Text = BrandR;
	assetInfoBox16->Text = TypeR;
	assetInfoBox21->Text = StatusR;
	assetInfoBox23->Text = LocR;
	assetInfoBox22->Text = UserR;
	assetInfoBox24->Text = DeptR;
	assetInfoBox25->Text = DOPR;
	assetInfoBox26->Text = getLastInvDate("machineshistory", "machines_SerialNumber", SNR, "DateOut");
}

public: System::String ^ getLastInvDate(String ^ tableNStr, String ^ columnNStr, String ^ entryNStr, String ^ cellWant) {
	String ^ str;
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT " + cellWant + " FROM " + tableNStr + " WHERE " + columnNStr + "='" + entryNStr + "' AND curr='1';", conDB);
	MySqlDataReader ^ myReader;
	try {
		conDB->Open();
		myReader = cmD->ExecuteReader();
		if (myReader->Read()) {
			str = myReader->GetString(0);
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at getLastInvDate in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return str;
}

private: System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e) {
	clearFields();
}

public: System::Void clearSearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	searchForCombo->Text = "";
}

private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	InvListView->Clear();
	int searchInt = 0;
	String ^ searchStr = searchForCombo->Text;
	String ^ searchByStr = SearchFilterDrop->Text;
	if (searchStr == "") {
		MessageBox::Show("The search box is blank", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	if (searchByStr == "Search By") {
		searchSubStr(searchStr);
		//searchInt = 13;
	}
	else if (searchByStr == "Serial Number") {
		searchInt = 0;
	}
	else if (searchByStr == "Inventory Tag") {
		searchInt = 1;
	}
	else if (searchByStr == "Brand") {
		searchInt = 2;
	}
	else if (searchByStr == "Model") {
		searchInt = 3;
	}
	else if (searchByStr == "Name") {
		searchInt = 4;
	}
	else if (searchByStr == "Status") {
		searchInt = 5;
	}
	else if (searchByStr == "User") {
		searchInt = 6;
	}
	else if (searchByStr == "Department") {
		searchInt = 7;
	}
	else if (searchByStr == "Location") {
		searchInt = 8;
	}
	else if (searchByStr == "Date of Purchase") {
		searchInt = 9;
	}
	else if (searchByStr == "Date Updated") {
		searchInt = 10;
	}
	else if (searchByStr == "Updater") {
		searchInt = 11;
	}
	else if (searchByStr == "Type") {
		searchInt = 12;
	}
	if (searchByStr != "Search By") {
		searchDBBy(searchInt, searchStr);
	}
}

public: System::Void viewCurrentEntriesMatch(Boolean all, String ^ inStrRef, String ^ columnRef, Boolean statusB) {

	setListViewForCurrMachines();

	ListViewItem ^ lIt;

	String ^ comStr;
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlConnection^ conDB2 = gcnew MySqlConnection(serverStr1);
	try {
		conDB->Open();
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' ORDER BY historyIndex DESC;", conDB);
		MySqlCommand ^ macCmd = gcnew MySqlCommand;
		MySqlDataReader ^ myReader, ^ myReader2;
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			String ^ nameT = myReader->GetString(9);
			String ^ deptT = myReader->GetString(4);
			String ^ statT = myReader->GetString(1);
			String ^ locT = myReader->GetString(2);
			String ^ invT = getFieldFromMachines(myReader->GetString(0), "InventoryTag", serverStr1);
			String ^ snT = getFieldFromMachines(myReader->GetString(0), "SerialNumber", serverStr1);
			String ^ modT = getFieldFromMachines(myReader->GetString(0), "modelNumber", serverStr1);
			String ^ typeT = getFieldFromMachines(myReader->GetString(0), "machinetypes_TypeT", serverStr1);
			String ^ brandT = getFieldFromMachines(myReader->GetString(0), "machineBrands_Brands", serverStr1);
			String ^ dopT = getFieldFromMachines(myReader->GetString(0), "DateOfPurchase", serverStr1);
			String ^ commentT = myReader->GetString(8);
			String ^ currT = myReader->GetString(7);
			int currInt = myReader->GetInt32(7);
			String ^ usrStr = myReader->GetString(3);
			String ^ userName = getUserName(usrStr, serverStr1);
			String ^ dateUp = myReader->GetString(6);
			String ^ updater = myReader->GetString(10);
			if (myReader->GetString(0) == "") {
				return;
			}
			conDB2->Open();
			if (all) {
				comStr = "SELECT * FROM machines WHERE SerialNumber='" + myReader->GetString(0) + "';";
			}
			else {
				comStr = "SELECT * FROM machines WHERE SerialNumber='" + myReader->GetString(0) + "' AND " + columnRef + " = '" + inStrRef + "';";
			}
			MySqlCommand ^ macCmd = gcnew MySqlCommand(comStr, conDB2);
			myReader2 = macCmd->ExecuteReader();
			if (myReader2->Read()) {
				String ^ userID = myReader->GetString(3);
				String ^ userN = getUserName(userID, serverStr1);
				array<String^>^ row = { snT, //0 - SN
					invT,//1 - InventoryTag
					modT, //2 - ModelNum
					typeT,//3 - Type
					statT, //4 - Status
					usrStr,//5 - Users
					locT,//6 - Location
					dateUp,//8 - Last date inventory
					deptT,//7 - Dept
					dopT//9 - Date purchase};}
				};

				lIt = gcnew ListViewItem(row);

				InvListView->Items->Add(lIt);

			}
			conDB2->Close();
		}
		conDB->Close();
		setDisplayingTextLabel("Search result for Brand: " + inStrRef);
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at viewCurrentEntriesMatch in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void searchDBBy(int searchByInt, String ^ searchForStr) {
	String ^ fName;
	String ^ lName;
	String ^ delimStr = ", ";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	String ^ testS = "";
	Boolean singleB = false, mI = false;
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader, ^ myReader2, ^ myReader3;
	String ^ commandStr;
	try {
		switch (searchByInt) {
		case 0: commandStr = "SELECT * FROM machineshistory WHERE machines_SerialNumber='" + searchForStr + "' ORDER BY historyIndex DESC;";
			viewMachineHistory(searchForStr, true, true, commandStr, "Serial Number");
			break;
		case 1: {
			commandStr = "SELECT * FROM machines WHERE InventoryTag='" + searchForStr + "';";
			mI = false;
			singleB = true;
			MySqlCommand^ cmD3 = gcnew MySqlCommand(commandStr, conDB);
			conDB->Open();
			myReader3 = cmD3->ExecuteReader();
			while (myReader3->Read()) {
				testS = myReader3->GetString(0);
			}
			conDB->Close();
			viewMachineHistory(testS, true, true, "SELECT * FROM machineshistory WHERE machines_SerialNumber='" + testS + "' ORDER BY historyIndex DESC;", "Inventory Tag");

			break;
		}
		case 2: {
			if (!tableTester("machines", "machineBrands_Brands", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this brand, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = true;
			viewCurrentEntriesMatch(false, searchForStr, "machineBrands_Brands", false);
			break;
		}
		case 3: {
			commandStr = "SELECT * FROM machines WHERE modelNumber='" + searchForStr + "';";
			if (!tableTester("machines", "modelNumber", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this model number, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewCurrentEntriesMatch(false, searchForStr, "modelNumber", false);
			break;
		}
		case 4: {
			commandStr = "SELECT * FROM machineshistory WHERE machineName='" + searchForStr + "';";
			singleB = false;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "Machine Name");
			break;
		}
		case 5: {
			commandStr = "SELECT * FROM machineshistory WHERE statuses_Statuss='" + searchForStr + "';";
			if (!tableTester("machineshistory", "statuses_Statuss", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this Status, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "Status");
			break;
		}
		case 6: {
			String ^ iD = getUserId(serverStr1, searchForStr, settingsStruct.lastUser);
			commandStr = "SELECT * FROM machineshistory WHERE users_UserID='" + iD + "';";

			if (!tableTester("machineshistory", "users_UserID", iD, serverStr1)) {
				MessageBox::Show("No machines with this User, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "User");
			break;
		}
		case 7: {
			commandStr = "SELECT * FROM machineshistory WHERE departments_Department='" + searchForStr + "';";
			if (!tableTester("machineshistory", "departments_Department", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this department, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "Department");
			break;
		}
		case 8: {
			commandStr = "SELECT * FROM machineshistory WHERE locations_Locations='" + searchForStr + "';";
			if (!tableTester("machineshistory", "locations_Locations", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this location, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "Location");
			break;
		}
		case 9: {
			commandStr = "SELECT * FROM machines WHERE DateOfPurchase='" + searchForStr + "';";
			singleB = false;
			//viewMachineHistory(searchForStr, false, singleB, commandStr, "Purchase Date");
			break;
		}
		case 10: {
			commandStr = "SELECT * FROM machineshistory WHERE DateInventoried='" + searchForStr + "';";
			singleB = false;
			//viewMachineHistory(searchForStr, false, singleB, commandStr, "Inventory Date");
			break;
		}
		case 11: {
			commandStr = "SELECT * FROM machineshistory WHERE updater='" + searchForStr + "';";
			//checkFieldValidity(String ^ itemToCheck, String ^ tableName, String ^ columnName, String ^ servStr)
			if (!checkFieldValidity(searchForStr, "machineshistory", "updater", serverStr1)) {
				MessageBox::Show("No machines were updated by " + searchForStr + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = true;
			viewMachineHistory(searchForStr, true, singleB, commandStr, "Updater");
			break;
		}
		case 12: {
			commandStr = "SELECT * FROM machines WHERE machinetypes_TypeT='" + searchForStr + "';";
			if (!tableTester("machines", "machinetypes_TypeT", searchForStr, serverStr1)) {
				MessageBox::Show("No machines with this Machine Type, " + searchForStr + ", exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			singleB = false;
			viewCurrentEntriesMatch(false, searchForStr, "machinetypes_TypeT", false);
			break;
		}
		}
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at searchByDB in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void listSettingMenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ListForm ^ listsF = gcnew ListForm;
	listsF->userLoggedIn = usernameString;
	listsF->sStruct = settingsStruct;
	listsF->servStr = serverStr1;
	listsF->ShowDialog();
}

public: System::Void clearFields() {
	assetInfoBox11->Text = "";
	assetInfoBox12->Text = "";
	assetInfoBox14->Text = "";
	assetInfoBox13->Text = "";
	assetInfoBox15->Text = "";
	assetInfoBox16->Text = "";
	assetInfoBox21->Text = "";
	assetInfoBox23->Text = "";
	assetInfoBox22->Text = "";
	assetInfoBox24->Text = "";
	assetInfoBox25->Text = "";
	assetInfoBox26->Text = "";

}

public: System::Void computerBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//backgroundWorker1->RunWorkerAsync(1);
	nextScrn = "Computer";
	updateUI();
}

private: System::Void queueGridView_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (queueGridView->Columns[e->ColumnIndex] == minusColumn)
	{
		queueGridView->Rows->RemoveAt(e->RowIndex);
	}
}

public: System::Void addToUpdateQueue(String ^ snToAdd) {
	String ^ invSt;
	if (queueGridView->RowCount <= 1) {
		invSt = getFieldFromMachines(snToAdd, "InventoryTag", serverStr1);
		if (invSt != nullptr) {
			queueGridView->Rows->Add("-", snToAdd, invSt);
		}
	}
	else {
		invSt = getFieldFromMachines(snToAdd, "InventoryTag", serverStr1);
		if (invSt != nullptr) {
			queueGridView->Rows->Add("-", snToAdd, invSt);
		}
	}
}

public: System::Void clearUpdateQueue() {
	if (queueGridView->RowCount != 0) {
		for (int i = 0; i <= queueGridView->RowCount; i++) {
			queueGridView->Rows->RemoveAt(0);
		}
	}
}

public: int checkForMessages() {
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	String ^ testUpd = getUpdater(usernameString, serverStr1);
	if (testUpd == "failed") {
		MessageBox::Show("Error with getUpdater function", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return 0;
	}
	else {
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT COUNT(*) FROM messages WHERE Recipient='" + testUpd + "' AND hasBeenRead='0';", conDB);
		MySqlDataReader ^ myReader;
		try {
			conDB->Open();
			myReader = cmD->ExecuteReader();
			myReader->Read();
			int cnt = myReader->GetInt32(0);
			conDB->Close();
			return cnt;
		}
		catch (MySqlException ^e) {
			String ^ errorMsg = "Error connecting to the database at checkForMessages in MainForm!";
			MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return 0;
		}
	}
}

public: System::Void updateUI() {
	if (loggedIn) {
		if (currentScrn != nextScrn) {
			if (!backB && currentScrn != "History") {
				scrnStack->Push(currentScrn);
			}
			currentScrn = nextScrn;
			backB = false;

			String ^ testStr = getUpdater(usernameString, serverStr1);
			if (testStr == "failed") {
				MessageBox::Show("Error with getUpdater function", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else {
				String ^ testStr2 = "Logged in as: " + testStr;
				setBottomStatusMsg(testStr2);
				setMessageStatus();
				loginLogout->Text = "Logout";
				InvListView->Clear();
				clearFields();
				searchForCombo->Text = "";
				if (currentScrn != "Computer") {
					//MessageBox::Show("6", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					//newMachineButton->Visible = false;
				}
				if (currentScrn == "MainMenu") {
					//MessageBox::Show("5", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					setUIforMainMenu();
				}
				else if (currentScrn == "Computer") {
					viewCurrentEntries2();
					//MessageBox::Show("1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					setUIforComputer();
					//change all labels to computers
					//MessageBox::Show("2", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					
				}
				else if (currentScrn == "HardDrives") {
					setUIforDrives();
					//change all labels to hard drives
					//update list for hard drives
				}
				else if (currentScrn == "Users") {
					setUIforUsers();
				}
			}
		}
	}
	else if (!loggedIn) {
		loginLogout->Text = "Login";
		InvListView->Clear();
	}
	this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());


	backgroundWorker1->DoWork += gcnew DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
	backgroundWorker1->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker1_RunWorkerCompleted);
	backgroundWorker1->ProgressChanged += gcnew ProgressChangedEventHandler(this, &MyForm::backgroundWorker1_ProgressChanged);
	backgroundWorker1->WorkerReportsProgress = true;
	backgroundWorker1->RunWorkerAsync();
}

private: System::Void loginLogout_Click(System::Object^  sender, System::EventArgs^  e) {
	if (loginLogout->Text == "Login") {
		loginWindowForm ^ logF = gcnew loginWindowForm;
		logF->ShowDialog();
	}
	else if (loginLogout->Text == "Logout") {
		Close();
	}
}

private: System::Void editThisMachineButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkMainBlanks()) {
		EditSingleMachineForm ^ editForm = gcnew EditSingleMachineForm;
		editForm->sStruct = settingsStruct;
		editForm->typeOfEdit = currentScrn;
		if (currentScrn == "History") {
			editForm->setSNRef(assetInfoBox12->Text);
		}
		editForm->newOrEdit = false;
		editForm->updaterStr = usernameString;
		editForm->servStr = serverStr1;
		editForm->sStruct = settingsStruct;
		editForm->ShowDialog();
		String ^ newSn = editForm->snRef;
		if (currentScrn == "History") {
			viewMachineHistory(assetInfoBox12->Text, false, true, "SELECT * FROM machineshistory WHERE machines_SerialNumber='" + newSn + "' ORDER BY historyIndex DESC;", "Serial Number");
		}
	}
	else {
		MessageBox::Show("You have nothing selected to edit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
		 
public: System::Boolean checkMainBlanks() {
	String ^ invTag = assetInfoBox11->Text;
	String ^ SNnumber = assetInfoBox12->Text;
	String ^ ModelN = assetInfoBox14->Text;
	String ^ DOPd = assetInfoBox26->Text;
	String ^ BrandD = assetInfoBox15->Text;
	String ^ TypeD = assetInfoBox16->Text;
	String ^ testVar = "";
	if (invTag == "" || SNnumber == testVar || ModelN == testVar || BrandD == testVar || TypeD == testVar) {
		return false;
	}
	else {
		return true;
	}
}

private: System::Void newMachineButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (currentScrn == "Computer") {
		AddNewMachineWindow ^ nMachineWin = gcnew AddNewMachineWindow;
		nMachineWin->servStr = serverStr1;
		nMachineWin->sStruct = settingsStruct;
		nMachineWin->edit = false;
		nMachineWin->userLoggedIn = usernameString;
		nMachineWin->ShowDialog();
		if (nMachineWin->saved) {
			EditSingleMachineForm ^ editF = gcnew EditSingleMachineForm;
			editF->sStruct = settingsStruct;
			editF->newOrEdit = true;
			editF->currBrandRef = nMachineWin->nBrand;
			editF->currInvRef = nMachineWin->nInv;
			editF->snRef = nMachineWin->nSN;
			editF->currPurDateRef = nMachineWin->nDPur;
			editF->currModelRef = nMachineWin->nMod;
			editF->currTypeRef = nMachineWin->nType;
			editF->servStr = settingsStruct.servStr;
			editF->updaterStr = settingsStruct.lastUser;
			editF->ShowDialog();
		}
		updateUI();
	}
}

private: System::Void SearchFilterDrop_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	searchForCombo->Items->Clear();
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader;
	String ^ oStr;
	String ^ fN, ^ lN, ^nN;
	String ^ searchByStr = SearchFilterDrop->Text;
	try {
		if (searchByStr == "Search By") {

		}
		else if (searchByStr == "Inventory Tag") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT InventoryTag FROM machines;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Serial Number") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT SerialNumber FROM machines;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Brand") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machinebrands;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Model") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machinemodels;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Name") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT machineName FROM machineshistory;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();

			while (myReader->Read()) {
				if (!searchForCombo->Items->Contains(myReader->GetString(0))) {
					searchForCombo->Items->Add(myReader->GetString(0));
				}
			}
		}
		else if (searchByStr == "Status") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM statuses;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "User") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT users_UserID FROM machineshistory WHERE curr='1';", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();

			while (myReader->Read()) {
				if (!searchForCombo->Items->Contains(getUserName(myReader->GetString(0), serverStr1))) {
					searchForCombo->Items->Add(getUserName(myReader->GetString(0), serverStr1));
				}
			}
		}
		else if (searchByStr == "Department") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM departments;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Location") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM locations;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Type") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machinetypes;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
		}
		else if (searchByStr == "Date of Purchase") {
			/*MySqlCommand^ cmD = gcnew MySqlCommand("SELECT DateOfPurchase FROM machines;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();*/

			//search by relative date
		}
		else if (searchByStr == "Date Updated") {
			/*MySqlCommand^ cmD = gcnew MySqlCommand("SELECT DateOfPurchase FROM machines;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();*/

			//search by relative date
		}
		else if (searchByStr == "Updater") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT updater FROM machineshistory;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();

			while (myReader->Read()) {
				if (!searchForCombo->Items->Contains(myReader->GetString(0))) {
					searchForCombo->Items->Add(myReader->GetString(0));
				}
			}
		}
		if (searchByStr != "Search By" && searchByStr != "User" && searchByStr != "Updater" && searchByStr != "Name" &&
			searchByStr != "Date of Purchase" && searchByStr != "Date Updated") {
			while (myReader->Read()) {
				oStr = myReader->GetString(0);
				searchForCombo->Items->Add(oStr);
			}
		}

		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at searchFilterDrop_SelectedIndexChanged in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void setDisplayingTextLabel(String ^ dispStr) {
	displayingTextLabel->Text = dispStr;
}

public: System::Void setBottomStatusMsg(String ^ msg) {
	bottomLeftStatus->Text = msg;
}

public: System::Void setMessageStatus() {
	int msgCnt = checkForMessages();
	bottomLeftMessageStatus->Text = "New Messages: " + msgCnt;
}

private: System::Void toolStripAboutButton_Click(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void editBatchButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (queueGridView->RowCount == 0) {
		MessageBox::Show("Edit Queue is empty!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	String ^ delimStr = ";";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	EditSingleMachineForm ^ bEdit = gcnew EditSingleMachineForm;
	bEdit->batch = true;
	bEdit->servStr = serverStr1;
	String ^ strBuild, ^ newSNStr;
	for (int i = 0; i < queueGridView->RowCount; i++) {
		if (queueGridView[1,i]->Value != nullptr){
			newSNStr = queueGridView->Rows[i]->Cells[1]->Value->ToString();
		}
		if (newSNStr != "") {
			strBuild = strBuild + ";" + newSNStr;
		}
	}
	array<String^>^ arrSn = strBuild->Split(delimiCar);
	bEdit->snArr = arrSn;
	bEdit->strToArr = strBuild;
	bEdit->sStruct = settingsStruct;
	bEdit->updaterStr = usernameString;
	bEdit->ShowDialog();
	if (bEdit->isSaved) {
		//clearUpdateQueue();
	}
	updateUI();
}

private: System::Void ClearListButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
	clearUpdateQueue();
}

private: System::Void messagesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	MessagingForm ^ mForm = gcnew MessagingForm;
	mForm->sStruct = settingsStruct;
	mForm->ShowDialog();
	updateUI();
}

public: System::Void searchSubStr(String ^ searchStr) {
	
	if (checkSearchField("prefSeaSn", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "machines_SerialNumber", searchStr);
	}
	//MessageBox::Show("1", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaStat", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "statuses_Statuss", searchStr);
	}
	//MessageBox::Show("2", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaLoc", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "locations_Locations", searchStr);
	}
	//MessageBox::Show("3", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaUser", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "users_UserID", searchStr);
	}
	//MessageBox::Show("4", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaDept", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "departments_Department", searchStr);
	}
	//MessageBox::Show("5", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaComm", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "comm", searchStr);
	}
	//MessageBox::Show("6", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaMName", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "machineName", searchStr);
	}
	//MessageBox::Show("7", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaUpdater", settingsStruct.lastUser, serverStr1)) {
		getHistoryIndexFromSub("machineshistory", "updater", searchStr);
	}
	//MessageBox::Show("8", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaInv", settingsStruct.lastUser, serverStr1)) {
		getMachineFromSubStr("machines", "InventoryTag", searchStr);
	}
	//MessageBox::Show("9", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaModN", settingsStruct.lastUser, serverStr1)) {
		getMachineFromSubStr("machines", "modelNumber", searchStr);
	}
	//MessageBox::Show("10", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaBrand", settingsStruct.lastUser, serverStr1)) {
		getMachineFromSubStr("machines", "machineBrands_Brands", searchStr);
	}
	//MessageBox::Show("11", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	if (checkSearchField("prefSeaType", settingsStruct.lastUser, serverStr1)) {
		getMachineFromSubStr("machines", "machinetypes_TypeT", searchStr);
	}
	//MessageBox::Show("11.2", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}

public: System::Void getMachineFromSubStr(String ^ table, String ^ cColumn, String ^ subStr) {
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader;
	try {
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machines WHERE " + cColumn + " LIKE '%" + subStr + "%';", conDB);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			nextInvGridRow(myReader->GetString(0), true);
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at getMachineFromSubStr in MainForm!\n" + cColumn;
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void getHistoryIndexFromSub(String ^ table, String ^ cColumn, String ^ subStr) {
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader;	
	try {
		if (cColumn != "users_UserID") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT historyIndex FROM " + table + " WHERE " + cColumn + " LIKE '%" + subStr + "%';", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
			while (myReader->Read()) {
				nextInvGridRow(myReader->GetString(0), false);
			}
			conDB->Close();
		}
		else {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
			while (myReader->Read()) {
				String ^ tempUserStr = getUserName(myReader->GetString(3), serverStr1);
				if (tempUserStr->Contains(subStr)) {
					nextInvGridRow(myReader->GetString(11), false);
				}
			}
			conDB->Close();
		}
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at getHistoryIndexForm in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Boolean checkGridForEntry(String ^ snRef) {
	Boolean isInGrid = false;
	//MessageBox::Show(InventoryListView->RowCount.ToString(), snRef+"\nRows", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	/*for (int i = 0; i < invListView->RowCount; i++) {
		if (InventoryListView[1, i]->Value != nullptr) {
			if (InventoryListView[1, i]->Value->ToString() == snRef) {
				isInGrid = true;
				//MessageBox::Show("true", snRef, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}*/
	return isInGrid;
}

public: System::Void nextInvGridRow(String ^ dbIndex, Boolean tableInt) {
	String ^ tempInd;
	if (!tableInt) {
		tempInd = dbIndex;
		//MessageBox::Show("14", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (tableInt) {
		tempInd = getCurrDBIndex(dbIndex);
		//MessageBox::Show("13", tempInd, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader;
	try {
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory ORDER BY historyIndex DESC;", conDB);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		String ^ snT = getSingleFromDB("machineshistory", "historyIndex", tempInd, "machines_SerialNumber", serverStr1);
		//MessageBox::Show("12", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		String ^ invT = getSingleFromDB("machines", "SerialNumber", snT, "InventoryTag", serverStr1);
		String ^ modT = getSingleFromDB("machines", "SerialNumber", snT, "modelNumber", serverStr1);
		String ^ typeT = getSingleFromDB("machines", "SerialNumber", snT, "machinetypes_TypeT", serverStr1);
		String ^ statS = getSingleFromDB("machineshistory", "historyIndex", tempInd, "statuses_Statuss", serverStr1);
		String ^ userID = getSingleFromDB("machineshistory", "historyIndex", tempInd, "users_UserID", serverStr1);
		String ^ userName = getUserName(userID, serverStr1);
		String ^ locT = getSingleFromDB("machineshistory", "historyIndex", tempInd, "locations_Locations", serverStr1);
		String ^ dateUp = getSingleFromDB("machineshistory", "historyIndex", tempInd, "DateInventoried", serverStr1);
		String ^ deptT = getSingleFromDB("machineshistory", "historyIndex", tempInd, "departments_Department", serverStr1);
		String ^ dopT = getSingleFromDB("machines", "SerialNumber", snT, "DateOfPurchase", serverStr1);
		String ^ currT = getSingleFromDB("machineshistory", "historyIndex", tempInd, "curr", serverStr1);
		//MessageBox::Show(currT, snT, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		if (currT == "1") {
			if (!checkGridForEntry(snT)) {
				//MessageBox::Show(tempInd, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				//InventoryListView->Rows->Add("+", snT, invT, modT, typeT, statS, userName, locT, deptT, dateUp, dopT);
			}
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at nextInvGridRow in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::String ^ getCurrDBIndex(String ^ snRef) {
	String ^ returnStr;
	MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
	MySqlDataReader ^ myReader;
	try {
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE machines_SerialNumber='"+snRef+"';", conDB);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		if (myReader->Read()) {
			returnStr = myReader->GetString(11);
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at getCurrDBIndex in MainForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return returnStr;
}

private: System::Void preferencesSettingMenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SettingsForm ^ setF = gcnew SettingsForm;
	setF->setStruct = settingsStruct;
	setF->ShowDialog();
}

private: System::Void editPlusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Boolean isInQueue = false;
	String ^ testStr = assetInfoBox12->Text;
	for (int i = 0; i < queueGridView->RowCount; i++) {
		if (queueGridView[1, i]->Value != nullptr) {
			if (queueGridView[1, i]->Value->ToString() == testStr) {
				isInQueue = true;
				MessageBox::Show("The queue already has a machine with Serial Number: " + testStr, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}
	if (!isInQueue) {
		addToUpdateQueue(testStr);
	}
}

private: System::Void hardDrivesButton_Click(System::Object^  sender, System::EventArgs^  e) {
	nextScrn = "HardDrives";
	updateUI();
}

private: System::Void setUIforMainMenu() {
	SearchFilterDrop->Items->Clear();
	
	editQueueLabel->Visible = false;
	ClearListButton->Visible = false;
	editBatchButton->Visible = false;
	queueGridView->Visible = false;
	searchLabelTxt->Visible = false;
	SearchFilterDrop->Visible = false;
	searchForCombo->Visible = false;
	clearSearchButton->Visible = false;
	SearchButton->Visible = false;
	editPlusButton->Visible = false;
	editThisMachineButton->Visible = false;
	batchTest->Visible = false;
	newMachineButton->Visible = false;


	setAssetInfoVisTxt("None", false,
		"None", false, "None", false,
		"None", false, "None", false,
		"None", false, "None", false,
		"None", false, "None", false,
		"None", false, "None", false,
		"None", false, "None", false
	);

	setDisplayingTextLabel("Main Menu");

}

public: System::Void setUIforComputer() {

	editQueueLabel->Visible = true;
	ClearListButton->Visible = true;
	editBatchButton->Visible = true;
	queueGridView->Visible = true;
	searchLabelTxt->Visible = true;
	SearchFilterDrop->Visible = true;
	searchForCombo->Visible = true;
	clearSearchButton->Visible = true;
	SearchButton->Visible = true;
	editPlusButton->Visible = true;
	editThisMachineButton->Visible = true;
	batchTest->Visible = true;
	newMachineButton->Visible = true;

	SearchFilterDrop->Items->Clear();

	this->SearchFilterDrop->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
		L"Serial Number", L"Inventory Tag", L"Brand",
			L"Model", L"Name", L"Status", L"User", L"Department", L"Location", L"Type",/* L"Date of Purchase", L"Date Updated",*/ L"Updater"
	});

	setAssetInfoVisTxt("Machine Info", true,
		"Inventory Tag", true, "Status", true,
		"S/N", true, "User", true,
		"Name", true, "Location", true,
		"Model", true, "Department", true,
		"Brand", true, "Date of Purchase", true,
		"Type", true, "Date of LPI", true
	);

	setDisplayingTextLabel("Current Machines");

}

public: System::Void setUIforDrives() {

	editQueueLabel->Visible = true;
	ClearListButton->Visible = true;
	editBatchButton->Visible = true;
	queueGridView->Visible = true;
	searchLabelTxt->Visible = true;
	SearchFilterDrop->Visible = true;
	searchForCombo->Visible = true;
	clearSearchButton->Visible = true;
	SearchButton->Visible = true;
	editPlusButton->Visible = true;
	editThisMachineButton->Visible = true;
	batchTest->Visible = false;
	newMachineButton->Visible = false;

	SearchFilterDrop->Items->Clear();
	this->SearchFilterDrop->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
		L"Serial Number", L"Brand",
			L"Model", L"Status", L"Department", L"Location", L"Type", L"Date Updated", L"Updater"
	});

	setAssetInfoVisTxt("Drive Info", true,
		"S/N", true, "Model", true,
		"Type", true, "Size", true,
		"Speed", true, "Brand", true,
		"Location", true, "Department", true,
		"DOM", true, "None", false,
		"None", false, "None", false
	);

	setDisplayingTextLabel("Current Drives");
}

public: System::Void setUIforUsers() {

	editQueueLabel->Visible = false;
	ClearListButton->Visible = false;
	editBatchButton->Visible = false;
	queueGridView->Visible = false;
	searchLabelTxt->Visible = true;
	SearchFilterDrop->Visible = true;
	searchForCombo->Visible = true;
	clearSearchButton->Visible = true;
	SearchButton->Visible = true;
	editPlusButton->Visible = false;
	editThisMachineButton->Visible = false;
	batchTest->Visible = false;
	newMachineButton->Visible = false;

	SearchFilterDrop->Items->Clear();
	this->SearchFilterDrop->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
		L"First Name", L"Last Name",
			L"Username", L"Location", L"Department", L"Supervisor"
	});

	setAssetInfoVisTxt("User Info", true,
		"First Name", true, "Last Name", true,
		"Location", true, "Department", true,
		"Speed", true, "Brand", true,
		"Location", true, "Department", true,
		"Supervisor", true, "None", false,
		"None", false, "None", false
	);

	setDisplayingTextLabel("Users");
}

public: System::Void setAssetInfoVisTxt(String ^ mainTxt, Boolean mainVis,
									String ^ label11Txt, Boolean l11Vis,
									String ^ label21Txt, Boolean l21Vis,
									String ^ label12Txt, Boolean l12Vis,
									String ^ label22Txt, Boolean l22Vis,
									String ^ label13Txt, Boolean l13Vis,
									String ^ label23Txt, Boolean l23Vis,
									String ^ label14Txt, Boolean l14Vis,
									String ^ label24Txt, Boolean l24Vis,
									String ^ label15Txt, Boolean l15Vis,
									String ^ label25Txt, Boolean l25Vis,
									String ^ label16Txt, Boolean l16Vis,
									String ^ label26Txt, Boolean l26Vis
							) {
	assetInfoLabel->Text = mainTxt;
	assetInfoLabel->Visible = mainVis;

	assetInfoLabel11->Text = label11Txt;
	assetInfoLabel11->Visible = l11Vis;
	assetInfoBox11->Visible = l11Vis;

	assetInfoLabel21->Text = label21Txt;
	assetInfoLabel21->Visible = l21Vis;
	assetInfoBox21->Visible = l11Vis;

	assetInfoLabel12->Text = label12Txt;
	assetInfoLabel12->Visible = l12Vis;
	assetInfoBox12->Visible = l11Vis;

	assetInfoLabel22->Text = label22Txt;
	assetInfoLabel22->Visible = l22Vis;
	assetInfoBox22->Visible = l22Vis;

	assetInfoLabel13->Text = label13Txt;
	assetInfoLabel13->Visible = l13Vis;
	assetInfoBox13->Visible = l13Vis;

	assetInfoLabel23->Text = label23Txt;
	assetInfoLabel23->Visible = l23Vis;
	assetInfoBox23->Visible = l23Vis;

	assetInfoLabel14->Text = label14Txt;
	assetInfoLabel14->Visible = l14Vis;
	assetInfoBox14->Visible = l14Vis;

	assetInfoLabel24->Text = label24Txt;
	assetInfoLabel24->Visible = l24Vis;
	assetInfoBox24->Visible = l24Vis;

	assetInfoLabel15->Text = label15Txt;
	assetInfoLabel15->Visible = l15Vis;
	assetInfoBox15->Visible = l15Vis;

	assetInfoLabel25->Text = label25Txt;
	assetInfoLabel25->Visible = l25Vis;
	assetInfoBox25->Visible = l25Vis;

	assetInfoLabel16->Text = label16Txt;
	assetInfoLabel16->Visible = l16Vis;
	assetInfoBox16->Visible = l16Vis;

	assetInfoLabel26->Text = label26Txt;
	assetInfoLabel26->Visible = l26Vis;
	assetInfoBox26->Visible = l26Vis;
}


private: System::Void usersButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//setUIforUsers();
	nextScrn = "Users";
	updateUI();
}

private: System::Void mainMenuBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	nextScrn = "MainMenu";
	updateUI();
}

private: System::Void batchAdd() {
	Boolean contin = true;
	String ^ delimStr = ";";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	String^ fileName = "data\\batch.txt";
	if (!File::Exists(fileName))
	{
		return;
	}
	StreamReader^ sr = File::OpenText(fileName);
	String^ input, ^ s, ^ nameStr, ^ userStr, ^ locStr, ^ deptStr, ^ typeStr, ^ snStr, ^ modelStr, ^ statusStr, ^ dopStr, ^ doLPIStr, ^commentsStr;
	while ((input = sr->ReadLine()) != nullptr)
	{
		s = input;
		array<String^>^ sepStr = s->Split(delimiCar);
		if (!checkFieldValidity(sepStr[7], "machineshistory", "machines_SerialNumber", serverStr1)) {
			if (sepStr[5] == "IN" || sepStr[5] == "SB" || sepStr[5] == "IR") {
				AddNewMachineWindow ^ edF = gcnew AddNewMachineWindow;
				edF->sStruct = settingsStruct;
				edF->currSN = sepStr[7];
				edF->cancelBatchButton->Visible = true;
				edF->currType = sepStr[8];
				edF->currInv = sepStr[1];
				edF->cancelButton->Text = "Skip";
				if (sepStr[12] == "LENOVO") {
					edF->currBrand = "Lenovo";
				}
				else {
					edF->currBrand = sepStr[12];
				}
				edF->currMod = sepStr[9];
				edF->currMachineName = sepStr[0];
				edF->currLoc = sepStr[6];
				edF->currDept = sepStr[11];
				edF->currStatus = sepStr[5];
				edF->currComm = sepStr[10];
				edF->currUser = sepStr[4];
				edF->isAllBatch = true;

				edF->ShowDialog();

				if (edF->cancelBatch) {
					return;
				}

				if (edF->saved) {

					String ^ tempBrand = edF->brandCombo->Text;
					String ^ tempSN = edF->snTextbox->Text;
					String ^ tempMod = edF->modelCombo->Text;
					String ^ tempInv = edF->invTextBox->Text;
					String ^ tempType = edF->typeCombo->Text;

					EditSingleMachineForm ^ edF1 = gcnew EditSingleMachineForm;
					edF1->sStruct = settingsStruct;
					edF1->updaterStr = settingsStruct.lastUser;
					edF1->snRef = tempSN;
					edF1->newOrEdit = true;
					edF1->currBrandRef = tempBrand;
					edF1->currInvRef = tempInv;
					edF1->commentsTextbox->Text = sepStr[10];
					edF1->currModelRef = tempMod;
					edF1->currTypeRef = tempType;
					edF1->currMachineNameRef = sepStr[0];
					edF1->currLocRef = sepStr[6];
					edF1->currDeptRef = sepStr[11];
					if (sepStr[5] == "1D") {
						edF1->currStatusRef = "1D - Disposed - Destroy";
					}
					else if (sepStr[5] == "1C") {
						edF1->currStatusRef = "1C - Disposed - Charity";
					}
					else if (sepStr[5] == "1E") {
						edF1->currStatusRef = "1E - Returned -- End of Lease";
					}
					else if (sepStr[5] == "1O") {
						edF1->currStatusRef = "1O - Disposed -- Outright Sale";
					}
					else if (sepStr[5] == "1R") {
						edF1->currStatusRef = "1R - In for Repair";
					}
					else if (sepStr[5] == "1X") {
						edF1->currStatusRef = "1X - Disposed - Theft";
					}
					else if (sepStr[5] == "DM") {
						edF1->currStatusRef = "DM - Demobilization";
					}
					else if (sepStr[5] == "IN") {
						edF1->currStatusRef = "IN - In Service";
					}
					else if (sepStr[5] == "MB") {
						edF1->currStatusRef = "MB - Mobilization";
					}
					else if (sepStr[5] == "RU") {
						edF1->currStatusRef = "RU - Replaced Under Warranty";
					}
					else if (sepStr[5] == "SB") {
						edF1->currStatusRef = "SB - Standby";
					}
					edF1->currComments = sepStr[10];
					edF1->currUser = sepStr[4];
					edF1->isAllBatch = true;

					edF1->ShowDialog();
				}
			}

		}
	}
	sr->Close();
}

private: System::Void batchTest_Click(System::Object^  sender, System::EventArgs^  e) {
	batchAdd();
}

private: System::Void InvListView_DoubleClick(System::Object ^ sender, System::EventArgs^ e)
	{
	if (currentScrn == "Computer") {
		String ^ testStr = InvListView->SelectedItems[0]->SubItems[0]->Text;
		viewMachineHistory(testStr, false, true, "SELECT * FROM machineshistory WHERE machines_SerialNumber='" + testStr + "' ORDER BY historyIndex DESC;", "Serial Number");
	}
}

private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//MessageBox::Show("3", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	backB = true;
	nextScrn = scrnStack->Pop()->ToString();
	//MessageBox::Show("4", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//MessageBox::Show(nextScrn, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	updateUI();
}

private: System::Void topPlusBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Boolean isInQueue = false;
	String ^ testStr = InvListView->SelectedItems[0]->SubItems[0]->Text;
	for (int i = 0; i < queueGridView->RowCount; i++) {
		if (queueGridView[1, i]->Value != nullptr) {
			if (queueGridView[1, i]->Value->ToString() == testStr) {
				isInQueue = true;
				MessageBox::Show("The queue already has a machine with Serial Number: " + testStr, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}
	if (!isInQueue) {
		addToUpdateQueue(testStr);
	}
}

private: System::Void viewBtn_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ testStr2 = InvListView->SelectedItems[0]->SubItems[0]->Text;
	viewMachineHistory(testStr2, false, true, "SELECT * FROM machineshistory WHERE machines_SerialNumber='" + testStr2 + "' ORDER BY historyIndex DESC;", "Serial Number");
	//scrnStack->Push("Computers");
}










private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	//while (0==0) {
		if (currentScrn == "Computer") {
			//MessageBox::Show("1", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			
			BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);
			String ^ statStr = "IN - In Service";
			int passInt = 0;
			totalMachinesCnt = 0;
			MySqlConnection^ conDB1 = gcnew MySqlConnection(serverStr1);
			MySqlCommand^ cmD1 = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' AND statuses_Statuss='" + statStr + "';", conDB1);
			MySqlDataReader ^ myReader1;
			conDB1->Open();
			myReader1 = cmD1->ExecuteReader();
			while (myReader1->Read()) {
				totalMachinesCnt++;
			}
			initProgressBar(totalMachinesCnt);
			
			//MessageBox::Show(totalMachinesCnt.ToString(), "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			conDB1->Close();
			myReader1->Close();
			array <String^, 2> ^ mArr = gcnew array<String ^, 2>(totalMachinesCnt, 10);

			MySqlConnection^ conDB = gcnew MySqlConnection(serverStr1);
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1'  AND statuses_Statuss='" + statStr + "' ORDER BY historyIndex DESC;", conDB);
			MySqlDataReader ^ myReader;
			try {
				conDB->Open();
				myReader = cmD->ExecuteReader();
				ListViewItem ^ lIt;

				while (myReader->Read()) {
					String ^ nameT = myReader->GetString(9);
					String ^ deptT = myReader->GetString(4);
					String ^ statT = myReader->GetString(1);
					String ^ locT = myReader->GetString(2);
					String ^ invT = getFieldFromMachines(myReader->GetString(0), "InventoryTag", serverStr1);
					String ^ snT = getFieldFromMachines(myReader->GetString(0), "SerialNumber", serverStr1);
					String ^ modT = getFieldFromMachines(myReader->GetString(0), "modelNumber", serverStr1);
					String ^ typeT = getFieldFromMachines(myReader->GetString(0), "machinetypes_TypeT", serverStr1);
					String ^ brandT = getFieldFromMachines(myReader->GetString(0), "machineBrands_Brands", serverStr1);
					String ^ dopT = getFieldFromMachines(myReader->GetString(0), "DateOfPurchase", serverStr1);
					String ^ commentT = myReader->GetString(8);
					String ^ currT = myReader->GetString(7);
					int currInt = myReader->GetInt32(7);
					String ^ usrStr = myReader->GetString(3);
					String ^ userName = getUserName(usrStr, serverStr1);
					String ^ dateUp = myReader->GetString(6);
					String ^ updater = myReader->GetString(10);
					String ^ userID = myReader->GetString(3);
					String ^ userN = getUserName(userID, serverStr1);

					mArr[passInt, 0] = snT;
					mArr[passInt, 1] = invT;//1 - InventoryTag
					mArr[passInt, 2] = modT; //2 - ModelNum
					mArr[passInt, 3] = typeT;//3 - Type
					mArr[passInt, 4] = statT; //4 - Status
					mArr[passInt, 5] = userName;//5 - Users
					mArr[passInt, 6] = deptT;//7 - Dept
					mArr[passInt, 7] = locT;//6 - Location
					mArr[passInt, 8] = dateUp;//8 - Last date inventory
					mArr[passInt, 9] = dopT;//9 - Date purchase};}

					/*snRow[passInt] = snT;
					subA1[passInt] = invT;//1 - InventoryTag
					subA2[passInt] = modT; //2 - ModelNum
					subA3[passInt] = typeT;//3 - Type
					subA4[passInt] = statT; //4 - Status
					subA5[passInt] = userName;//5 - Users
					subA6[passInt] = deptT;//7 - Dept
					subA7[passInt] = locT;//6 - Location
					subA8[passInt] = dateUp;//8 - Last date inventory
					subA9[passInt] = dopT;//9 - Date purchase};}*/

					passInt++;
					backgroundWorker1->ReportProgress(passInt/totalMachinesCnt);
				}

				setDisplayingTextLabel("Current Machines");
			}
			catch (MySqlException ^e) {
				String ^ errorMsg = "Error connecting to the database at viewCurrentEntries2_2 in MainForm!";
				MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			if (backgroundWorker1->CancellationPending) //if it was cancelled
			{
				e->Cancel = true;
				return;
			}
			e->Result = mArr;
		}


		backgroundWorker1->ReportProgress(100);
		//return subA1, subA2, subA3;

		  //reporting progress
		//Thread::Sleep(5000);
	//}
}

public: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ /* sender*/, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {

	array<String^,2> ^ mArr2 = gcnew array<String ^, 2>(totalMachinesCnt, 10);

	mArr2 = (array<String^,2>^)e->Result;

	//progressBar1->Value = 100;   //reseting value

	if (e->Cancelled)    //Messages for the events
	{
		MessageBox::Show("You have cancelled background worker!!!");
	}
	else
	{
		//return mArr2;
		if (currentScrn == "Computer") {
			fillList(mArr2);
		}
	}
	//Thread::Sleep(5000);
	//backgroundWorker1->RunWorkerAsync();
}

private: delegate void fillListDelegate(array<String^, 2>^ arrIn);

public: System::Void fillList(array<String^, 2>^ arrIn) {
	if (this->InvokeRequired) {
		this->BeginInvoke(gcnew fillListDelegate(this, &MyForm::fillList), arrIn);
	}

	else {
		//InvListView->VirtualListSize = totalMachinesCnt;
		//this->Invoke(gcnew MethodInvoker(delegate(){
		this->InvListView->BeginUpdate();

		for (int i = 0; i < totalMachinesCnt; i++) {
			ListViewItem ^ lIt = gcnew ListViewItem(arrIn[i, 0]);
			for (int n = 1; n < 10; n++) {
				lIt->SubItems->Add(arrIn[i, n]);
			}
			this->InvListView->Items->Add(lIt);
		}
		this->InvListView->EndUpdate();
	}

}

public: System::Void backgroundWorker1_ProgressChanged( Object^ sender, ProgressChangedEventArgs^ e )
   {
      this->progressBar1->Value = e->ProgressPercentage;
   }

private: delegate void initProgressBarDelegate(int max);

public: System::Void initProgressBar(int max) {
	if (this->InvokeRequired) {
		this->BeginInvoke(gcnew initProgressBarDelegate(this, &MyForm::initProgressBar), max);
	}
	else {
		//MessageBox::Show(max.ToString(), "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		progressBar1->Minimum = 0;
		progressBar1->Maximum = max;
	}
}

};
}
