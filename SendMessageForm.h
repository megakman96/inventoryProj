#include "unifuncs.h"
#include <iostream>
#include <ctime>

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
	/// Summary for SendMessageForm
	/// </summary>
	public ref class SendMessageForm : public System::Windows::Forms::Form
	{
	public:
		SendMessageForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		settingsVars sStruct;
		String ^ replyStr;
		String^ newSub;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SendMessageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::RichTextBox^  messageBodyTextbox;
	private: System::Windows::Forms::Label^  subjectTextLabel;
	public: System::Windows::Forms::TextBox^  subjectTextBox;
	private:

	private: System::Windows::Forms::Label^  recipientLabel;
	public: System::Windows::Forms::ComboBox^  recipientCombo;
	private:

	private: System::Windows::Forms::Button^  sendButton;
	private: System::Windows::Forms::Button^  cancelButton;

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
			this->messageBodyTextbox = (gcnew System::Windows::Forms::RichTextBox());
			this->subjectTextLabel = (gcnew System::Windows::Forms::Label());
			this->subjectTextBox = (gcnew System::Windows::Forms::TextBox());
			this->recipientLabel = (gcnew System::Windows::Forms::Label());
			this->recipientCombo = (gcnew System::Windows::Forms::ComboBox());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				16)));
			this->tableLayoutPanel1->Controls->Add(this->messageBodyTextbox, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->subjectTextLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->subjectTextBox, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->recipientLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->recipientCombo, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->sendButton, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->cancelButton, 5, 7);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 9;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(852, 456);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// messageBodyTextbox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->messageBodyTextbox, 5);
			this->messageBodyTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->messageBodyTextbox->Location = System::Drawing::Point(18, 123);
			this->messageBodyTextbox->Name = L"messageBodyTextbox";
			this->messageBodyTextbox->Size = System::Drawing::Size(815, 270);
			this->messageBodyTextbox->TabIndex = 0;
			this->messageBodyTextbox->Text = L"";
			// 
			// subjectTextLabel
			// 
			this->subjectTextLabel->AutoSize = true;
			this->subjectTextLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->subjectTextLabel->Location = System::Drawing::Point(18, 80);
			this->subjectTextLabel->Name = L"subjectTextLabel";
			this->subjectTextLabel->Size = System::Drawing::Size(119, 30);
			this->subjectTextLabel->TabIndex = 1;
			this->subjectTextLabel->Text = L"Subject";
			this->subjectTextLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// subjectTextBox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->subjectTextBox, 3);
			this->subjectTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->subjectTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subjectTextBox->Location = System::Drawing::Point(143, 83);
			this->subjectTextBox->Name = L"subjectTextBox";
			this->subjectTextBox->Size = System::Drawing::Size(565, 23);
			this->subjectTextBox->TabIndex = 2;
			// 
			// recipientLabel
			// 
			this->recipientLabel->AutoSize = true;
			this->recipientLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->recipientLabel->Location = System::Drawing::Point(18, 40);
			this->recipientLabel->Name = L"recipientLabel";
			this->recipientLabel->Size = System::Drawing::Size(119, 30);
			this->recipientLabel->TabIndex = 3;
			this->recipientLabel->Text = L"Recipient";
			this->recipientLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// recipientCombo
			// 
			this->recipientCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->recipientCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->recipientCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->recipientCombo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->recipientCombo->FormattingEnabled = true;
			this->recipientCombo->Location = System::Drawing::Point(143, 43);
			this->recipientCombo->Name = L"recipientCombo";
			this->recipientCombo->Size = System::Drawing::Size(217, 24);
			this->recipientCombo->TabIndex = 4;
			// 
			// sendButton
			// 
			this->sendButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sendButton->Location = System::Drawing::Point(589, 409);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(119, 29);
			this->sendButton->TabIndex = 5;
			this->sendButton->Text = L"Send";
			this->sendButton->UseVisualStyleBackColor = true;
			this->sendButton->Click += gcnew System::EventHandler(this, &SendMessageForm::sendButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancelButton->Location = System::Drawing::Point(714, 409);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(119, 29);
			this->cancelButton->TabIndex = 6;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &SendMessageForm::cancelButton_Click);
			// 
			// SendMessageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 456);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"SendMessageForm";
			this->Text = L"SendMessageForm";
			this->Load += gcnew System::EventHandler(this, &SendMessageForm::SendMessageForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void SendMessageForm_Load(System::Object^  sender, System::EventArgs^  e) {
	String ^ oStr;
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	MySqlDataReader ^ myReader;
	MySqlCommand^ cmDtypes = gcnew MySqlCommand("SELECT * FROM users;", conDB);
	try {
		conDB->Open();
		myReader = cmDtypes->ExecuteReader();
		while (myReader->Read()) {
			oStr = makeNameString(myReader->GetString(1), myReader->GetString(2));
			recipientCombo->Items->Add(oStr);
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at SendMessageForm_Load function!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	recipientCombo->Text = replyStr;
	subjectTextBox->Text = newSub;
}

private: System::Void sendButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ receiveStr = recipientCombo->Text;
	String ^ updater = getUpdater(sStruct.lastUser, sStruct.servStr);
	if (updater != "failed") {
		String ^ subjectStr = subjectTextBox->Text;
		String ^ messageBodyStr = messageBodyTextbox->Text;
		DateTime ^ dtr = DateTime::Now;
		if (!checkIfUserExists(receiveStr, sStruct.servStr)) {
			MessageBox::Show("Not a valid recipient", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			if (MessageBox::Show("Are you sure you want send this message?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
				MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
				try {
					conDB->Open();
					//MessageBox::Show(updater, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					MySqlCommand^ cmD = gcnew MySqlCommand("CALL newMessage('" + updater + "', '" + receiveStr + "', '" + dtr + "', '" + subjectStr + "', '" + messageBodyStr + "');", conDB);
					cmD->ExecuteNonQuery();
					conDB->Close();
				}
				catch (MySqlException ^e) {
					String ^ errorMsg = "Error connecting to the database at sendButton_Click in SendMessageForm!";
					MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
		}
		Close();
	}
}



};
}
