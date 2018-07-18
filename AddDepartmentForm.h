#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
#include "uniFuncs.h"

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
	/// Summary for AddDepartmentForm
	/// </summary>
	public ref class AddDepartmentForm : public System::Windows::Forms::Form
	{
	public:
		AddDepartmentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	public:
		String ^ servStr;
		//settingsVars sStruct;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddDepartmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  labelText;

	private: System::Windows::Forms::TextBox^  deptTextBox;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  closeButton;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->deptTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->labelText, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->deptTextBox, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(580, 234);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelText->Location = System::Drawing::Point(3, 102);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(284, 30);
			this->labelText->TabIndex = 0;
			this->labelText->Text = L"New Department Name";
			this->labelText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// deptTextBox
			// 
			this->deptTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deptTextBox->Location = System::Drawing::Point(295, 107);
			this->deptTextBox->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->deptTextBox->Name = L"deptTextBox";
			this->deptTextBox->Size = System::Drawing::Size(280, 20);
			this->deptTextBox->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->saveButton, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->closeButton, 1, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(293, 135);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(284, 96);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// saveButton
			// 
			this->saveButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->saveButton->Location = System::Drawing::Point(3, 64);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(136, 29);
			this->saveButton->TabIndex = 0;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &AddDepartmentForm::saveButton_Click);
			// 
			// closeButton
			// 
			this->closeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->closeButton->Location = System::Drawing::Point(145, 64);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(136, 29);
			this->closeButton->TabIndex = 1;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &AddDepartmentForm::closeButton_Click);
			// 
			// AddDepartmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 234);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"AddDepartmentForm";
			this->Text = L"AddDepartmentForm";
			this->Load += gcnew System::EventHandler(this, &AddDepartmentForm::AddDepartmentForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ deptStr = deptTextBox->Text;
		String ^ formNameStr = labelText->Text;
		MySqlConnection^ getDbCon1 = gcnew MySqlConnection(servStr);
		try {

			if (formNameStr == "New Department") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('departments', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "New Brand") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('brands', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "New Location") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('locations', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "New Model") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('models', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "New Status") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('statuses', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "New Machine Type") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("Call batchUpdate('types', '" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			else if (formNameStr == "Delete Department") {
				MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM departments WHERE Department='" + deptStr + "');", getDbCon1);
				getDbCon1->Open();
				macCmd->ExecuteNonQuery();
			}
			getDbCon1->Close();
			Close();
		}
		catch (MySqlException ^e) {
			String ^ errorMsg = "Error connecting to the database at saveButton_Click in AddDepartmentForm!";
			MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

	}

private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
public: System::Void setVals(String ^ label) {
	labelText->Text = label;
	
}
private: System::Void AddDepartmentForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
