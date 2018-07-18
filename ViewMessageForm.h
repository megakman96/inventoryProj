#include "unifuncs.h"
#include "SendMessageForm.h"
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
	/// Summary for ViewMessageForm
	/// </summary>
	public ref class ViewMessageForm : public System::Windows::Forms::Form
	{
	public:
		ViewMessageForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^ senderStr;
		String ^ subjectStr;
		String ^ dateStr;
		String ^ servStr;
		String ^ messageBodyStr;
		String ^ messIDStr;

		settingsVars sStruct;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewMessageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  fromLabel;
	protected:
	private: System::Windows::Forms::Label^  subjectLabel;
	private: System::Windows::Forms::Label^  messageBodyLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  dateLabel;
	private: System::Windows::Forms::Label^  dateTextLabel;
	private: System::Windows::Forms::Label^  senderLabel;
	private: System::Windows::Forms::Label^  subjectFillLabel;
	private: System::Windows::Forms::Button^  replyButton;
	private: System::Windows::Forms::Button^  closeButton;

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
			this->fromLabel = (gcnew System::Windows::Forms::Label());
			this->subjectLabel = (gcnew System::Windows::Forms::Label());
			this->messageBodyLabel = (gcnew System::Windows::Forms::Label());
			this->senderLabel = (gcnew System::Windows::Forms::Label());
			this->dateTextLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->subjectFillLabel = (gcnew System::Windows::Forms::Label());
			this->replyButton = (gcnew System::Windows::Forms::Button());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// fromLabel
			// 
			this->fromLabel->AutoSize = true;
			this->fromLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fromLabel->Location = System::Drawing::Point(18, 15);
			this->fromLabel->Name = L"fromLabel";
			this->fromLabel->Size = System::Drawing::Size(119, 35);
			this->fromLabel->TabIndex = 2;
			this->fromLabel->Text = L"From";
			this->fromLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// subjectLabel
			// 
			this->subjectLabel->AutoSize = true;
			this->subjectLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->subjectLabel->Location = System::Drawing::Point(18, 60);
			this->subjectLabel->Name = L"subjectLabel";
			this->subjectLabel->Size = System::Drawing::Size(119, 35);
			this->subjectLabel->TabIndex = 1;
			this->subjectLabel->Text = L"Subject";
			this->subjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// messageBodyLabel
			// 
			this->messageBodyLabel->AutoSize = true;
			this->messageBodyLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tableLayoutPanel1->SetColumnSpan(this->messageBodyLabel, 8);
			this->messageBodyLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->messageBodyLabel->Location = System::Drawing::Point(18, 105);
			this->messageBodyLabel->Name = L"messageBodyLabel";
			this->messageBodyLabel->Size = System::Drawing::Size(857, 197);
			this->messageBodyLabel->TabIndex = 0;
			this->messageBodyLabel->Text = L"label1";
			// 
			// senderLabel
			// 
			this->senderLabel->AutoSize = true;
			this->senderLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->senderLabel->Location = System::Drawing::Point(143, 15);
			this->senderLabel->Name = L"senderLabel";
			this->senderLabel->Size = System::Drawing::Size(119, 35);
			this->senderLabel->TabIndex = 12;
			this->senderLabel->Text = L"From";
			this->senderLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTextLabel
			// 
			this->dateTextLabel->AutoSize = true;
			this->dateTextLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dateTextLabel->Location = System::Drawing::Point(278, 15);
			this->dateTextLabel->Name = L"dateTextLabel";
			this->dateTextLabel->Size = System::Drawing::Size(119, 35);
			this->dateTextLabel->TabIndex = 14;
			this->dateTextLabel->Text = L"From";
			this->dateTextLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dateLabel->Location = System::Drawing::Point(403, 15);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(119, 35);
			this->dateLabel->TabIndex = 15;
			this->dateLabel->Text = L"From";
			this->dateLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->Controls->Add(this->dateLabel, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->dateTextLabel, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->senderLabel, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->messageBodyLabel, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->subjectLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->fromLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->subjectFillLabel, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->replyButton, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->closeButton, 8, 6);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(893, 352);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// subjectFillLabel
			// 
			this->subjectFillLabel->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->subjectFillLabel, 4);
			this->subjectFillLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->subjectFillLabel->Location = System::Drawing::Point(143, 60);
			this->subjectFillLabel->Name = L"subjectFillLabel";
			this->subjectFillLabel->Size = System::Drawing::Size(379, 35);
			this->subjectFillLabel->TabIndex = 16;
			this->subjectFillLabel->Text = L"label1";
			this->subjectFillLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// replyButton
			// 
			this->replyButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->replyButton->Location = System::Drawing::Point(631, 305);
			this->replyButton->Name = L"replyButton";
			this->replyButton->Size = System::Drawing::Size(119, 29);
			this->replyButton->TabIndex = 17;
			this->replyButton->Text = L"Reply";
			this->replyButton->UseVisualStyleBackColor = true;
			this->replyButton->Click += gcnew System::EventHandler(this, &ViewMessageForm::replyButton_Click);
			// 
			// closeButton
			// 
			this->closeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->closeButton->Location = System::Drawing::Point(756, 305);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(119, 29);
			this->closeButton->TabIndex = 18;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &ViewMessageForm::closeButton_Click);
			// 
			// ViewMessageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 352);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"ViewMessageForm";
			this->Text = L"ViewMessageForm";
			this->Load += gcnew System::EventHandler(this, &ViewMessageForm::ViewMessageForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ViewMessageForm_Load(System::Object^  sender, System::EventArgs^  e) {
		senderLabel->Text = senderStr;
		dateLabel->Text = dateStr;
		subjectFillLabel->Text = subjectStr;
		messageBodyLabel->Text = messageBodyStr;

		if (senderLabel->Text != "" && dateLabel->Text != "" && subjectFillLabel->Text != "" && messageBodyLabel->Text != "") {
			/*updateField(String ^ table, String ^ wColumn, String ^ wEntry, String ^ upColumn, String ^ upEntry, String ^ servStr)*/
			updateField("messages", "messageID", messIDStr, "hasBeenRead", "1", sStruct.servStr);
		}

	}
private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void replyButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SendMessageForm ^ sForm = gcnew SendMessageForm;
	sForm->sStruct = sStruct;
	String ^ repSubStr = "RE: " + subjectStr;
	sForm->replyStr = senderStr;
	sForm->newSub = repSubStr;
	sForm->ShowDialog();
	Close();
}
};
}
