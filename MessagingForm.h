#include "unifuncs.h"
#include "SendMessageForm.h"
#include "ViewMessageForm.h"

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
	/// Summary for MessagingForm
	/// </summary>
	public ref class MessagingForm : public System::Windows::Forms::Form
	{
	public:
		MessagingForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:


	public:

		settingsVars sStruct;
			 String ^ servStr;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	public:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Button^  newMessageButton;
	private: System::Windows::Forms::Button^  deletedButton;
	private: System::Windows::Forms::Button^  sentButton;
	private: System::Windows::Forms::Button^  InboxButton;
	private: System::Windows::Forms::DataGridView^  messagesGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MessageID;
	private: System::Windows::Forms::DataGridViewButtonColumn^  OpenCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SenderColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubjectColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  readCol;

	public:



			 String ^ userLoggedIn;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MessagingForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->messagesGrid = (gcnew System::Windows::Forms::DataGridView());
			this->readCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubjectColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SenderColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OpenCol = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->MessageID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->InboxButton = (gcnew System::Windows::Forms::Button());
			this->sentButton = (gcnew System::Windows::Forms::Button());
			this->deletedButton = (gcnew System::Windows::Forms::Button());
			this->newMessageButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->messagesGrid))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				130)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->messagesGrid, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(913, 416);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// messagesGrid
			// 
			this->messagesGrid->AllowUserToAddRows = false;
			this->messagesGrid->AllowUserToDeleteRows = false;
			this->messagesGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->messagesGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->MessageID,
					this->OpenCol, this->DateColumn, this->SenderColumn, this->SubjectColumn, this->readCol
			});
			this->messagesGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->messagesGrid->Location = System::Drawing::Point(133, 3);
			this->messagesGrid->Name = L"messagesGrid";
			this->messagesGrid->Size = System::Drawing::Size(777, 410);
			this->messagesGrid->TabIndex = 1;
			this->messagesGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MessagingForm::messagesGrid_CellContentClick);
			// 
			// readCol
			// 
			this->readCol->HeaderText = L"Read";
			this->readCol->Name = L"readCol";
			this->readCol->ReadOnly = true;
			this->readCol->Visible = false;
			// 
			// SubjectColumn
			// 
			this->SubjectColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->SubjectColumn->HeaderText = L"Subject";
			this->SubjectColumn->Name = L"SubjectColumn";
			this->SubjectColumn->ReadOnly = true;
			this->SubjectColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->SubjectColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// SenderColumn
			// 
			this->SenderColumn->HeaderText = L"Sender";
			this->SenderColumn->Name = L"SenderColumn";
			this->SenderColumn->ReadOnly = true;
			this->SenderColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->SenderColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// DateColumn
			// 
			this->DateColumn->HeaderText = L"Date";
			this->DateColumn->Name = L"DateColumn";
			this->DateColumn->ReadOnly = true;
			// 
			// OpenCol
			// 
			this->OpenCol->HeaderText = L"Open";
			this->OpenCol->Name = L"OpenCol";
			this->OpenCol->ReadOnly = true;
			this->OpenCol->Width = 50;
			// 
			// MessageID
			// 
			this->MessageID->HeaderText = L"ID";
			this->MessageID->Name = L"MessageID";
			this->MessageID->ReadOnly = true;
			this->MessageID->Visible = false;
			this->MessageID->Width = 25;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel3->Controls->Add(this->newMessageButton, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->deletedButton, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->sentButton, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->InboxButton, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 5;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(124, 410);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// InboxButton
			// 
			this->InboxButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InboxButton->Location = System::Drawing::Point(3, 3);
			this->InboxButton->Name = L"InboxButton";
			this->InboxButton->Size = System::Drawing::Size(119, 29);
			this->InboxButton->TabIndex = 0;
			this->InboxButton->Text = L"Inbox";
			this->InboxButton->UseVisualStyleBackColor = true;
			this->InboxButton->Click += gcnew System::EventHandler(this, &MessagingForm::InboxButton_Click);
			// 
			// sentButton
			// 
			this->sentButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sentButton->Location = System::Drawing::Point(3, 38);
			this->sentButton->Name = L"sentButton";
			this->sentButton->Size = System::Drawing::Size(119, 29);
			this->sentButton->TabIndex = 5;
			this->sentButton->Text = L"Sent";
			this->sentButton->UseVisualStyleBackColor = true;
			this->sentButton->Click += gcnew System::EventHandler(this, &MessagingForm::sentButton_Click);
			// 
			// deletedButton
			// 
			this->deletedButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deletedButton->Location = System::Drawing::Point(3, 73);
			this->deletedButton->Name = L"deletedButton";
			this->deletedButton->Size = System::Drawing::Size(119, 29);
			this->deletedButton->TabIndex = 7;
			this->deletedButton->Text = L"Deleted";
			this->deletedButton->UseVisualStyleBackColor = true;
			// 
			// newMessageButton
			// 
			this->newMessageButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newMessageButton->Location = System::Drawing::Point(3, 108);
			this->newMessageButton->Name = L"newMessageButton";
			this->newMessageButton->Size = System::Drawing::Size(119, 29);
			this->newMessageButton->TabIndex = 9;
			this->newMessageButton->Text = L"Send New Message";
			this->newMessageButton->UseVisualStyleBackColor = true;
			this->newMessageButton->Click += gcnew System::EventHandler(this, &MessagingForm::newMessageButton_Click);
			// 
			// MessagingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 416);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Name = L"MessagingForm";
			this->Text = L"Messaging";
			this->Load += gcnew System::EventHandler(this, &MessagingForm::MessagingForm_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->messagesGrid))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MessagingForm_Load(System::Object^  sender, System::EventArgs^  e) {
		getInbox();

	}

public: System::Void setColumnOrder() {
	messagesGrid->Columns["MessagesID"]->DisplayIndex = 0;
	messagesGrid->Columns["OpenCol"]->DisplayIndex = 1;
	messagesGrid->Columns["DateColumn"]->DisplayIndex = 2;
	messagesGrid->Columns["SenderColumn"]->DisplayIndex = 3;
	messagesGrid->Columns["SubjectColumn"]->DisplayIndex = 4;
	messagesGrid->Columns["readCol"]->DisplayIndex = 5;
}

private: System::Void InboxButton_Click(System::Object^  sender, System::EventArgs^  e) {
	getInbox();
}

public: System::Void getInbox() {
	clearRows();
	String ^ message;
	String ^ updater = getUpdater(sStruct.lastUser, sStruct.servStr);
	if (updater != nullptr) {
		if (!checkFieldValidity(updater, "messages", "Recipient", sStruct.servStr)) {
			return;
		}
		MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
		try {
			conDB->Open();
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM messages WHERE Recipient='" + updater + "' ORDER BY messageID DESC;", conDB);
			MySqlDataReader ^ myReader;
			myReader = cmD->ExecuteReader();
			while (myReader->Read()) {
				messagesGrid->Rows->Add(myReader->GetString(0), "", myReader->GetString(3), myReader->GetString(1), myReader->GetString(5));
			}
			conDB->Close();
		}
		catch (MySqlException ^e) {
			String ^ errorMsg = "Error connecting to the database at getInbox function!";
			MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}

private: System::Void newMessageButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SendMessageForm ^ sForm = gcnew SendMessageForm;
	sForm->sStruct = sStruct;
	sForm->ShowDialog();

}

private: System::Void sentButton_Click(System::Object^  sender, System::EventArgs^  e) {
	clearRows();
	String ^ message;
	String ^ updater = getUpdater(sStruct.lastUser, sStruct.servStr);
	if (!checkFieldValidity(updater, "messages", "Sender", sStruct.servStr)) {
		return;
	}
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	try {
		conDB->Open();
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM messages WHERE Sender='" + updater + "' ORDER BY messageID DESC;", conDB);
		MySqlDataReader ^ myReader;
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			messagesGrid->Rows->Add(myReader->GetString(0), "", myReader->GetString(3), myReader->GetString(1), myReader->GetString(5));
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at sentButton_Click function in MessagingForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void clearRows() {
	if (messagesGrid->RowCount != 0) {
		for (int i = 0; i <= messagesGrid->RowCount; i++) {
			messagesGrid->Rows->RemoveAt(0);
		}
	}
}

private: System::Void messagesGrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String ^ testStr = messagesGrid->Rows[e->RowIndex]->Cells[0]->Value->ToString();
	ViewMessageForm ^ vForm = gcnew ViewMessageForm;
	vForm->sStruct = sStruct;
	vForm->messIDStr = testStr;
	vForm->senderStr = getSingleFromDB("messages", "messageID", testStr, "Sender", sStruct.servStr);
	vForm->dateStr = getSingleFromDB("messages", "messageID", testStr, "DateSent", sStruct.servStr);
	vForm->subjectStr = getSingleFromDB("messages", "messageID", testStr, "Subject", sStruct.servStr);
	vForm->messageBodyStr = getSingleFromDB("messages", "messageID", testStr, "MessageBody", sStruct.servStr);
	vForm->ShowDialog();
}
};
}
