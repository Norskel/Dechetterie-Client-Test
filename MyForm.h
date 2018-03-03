#pragma once
#include "Client.h"
#include "StructTypeMessage.h"
#include "Protocole.h"



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	delegate void DelegateReceiveMsg(array<unsigned char, 1>^);
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Client^ cl)
		{
			InitializeComponent();
			_cl = cl;
			
			//listTMsg = ltm;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		Client^ _cl;
		Protocole^ p = Protocole::getProtocole();
		TypeMessage^ _TM = gcnew TypeMessage();
		DelegateReceiveMsg^ rMsg;
		


		//List<TypeMessage^>^ listTMsg;
	private: System::Windows::Forms::Timer^  timerUpdate;
	private: System::Windows::Forms::ComboBox^  cbSendMsg;
	private: System::Windows::Forms::TextBox^  tbSType;

	private: System::Windows::Forms::TextBox^  tbSTaille;

	private: System::Windows::Forms::GroupBox^  gbData2;
	private: System::Windows::Forms::NumericUpDown^  IntType2;
	private: System::Windows::Forms::Label^  lData2;
	private: System::Windows::Forms::TextBox^  StringType2;
	private: System::Windows::Forms::CheckBox^  BoolType2;
	private: System::Windows::Forms::GroupBox^  gbData1;
	private: System::Windows::Forms::NumericUpDown^  IntType1;
	private: System::Windows::Forms::Label^  lData;
	private: System::Windows::Forms::TextBox^  StringType1;
	private: System::Windows::Forms::CheckBox^  BoolType1;
	private: System::Windows::Forms::GroupBox^  gbPacket;


	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::TextBox^  tbSD2;


	private: System::Windows::Forms::TextBox^  tbSD1;

	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Button^  btSend;
	private: System::Windows::Forms::GroupBox^  tbRD1;
	private: System::Windows::Forms::TextBox^  tbRType;
	private: System::Windows::Forms::TextBox^  tbRD2;
	private: System::Windows::Forms::TextBox^  tbRTaille;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l9;
	private: System::Windows::Forms::Label^  l10;




	private: System::Windows::Forms::GroupBox^  gbReceive;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  l12;

	private: System::Windows::Forms::TextBox^  textR2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  l11;

	private: System::Windows::Forms::TextBox^  textR1;
	private: System::Windows::Forms::TextBox^  tBType;

	protected:
		Boolean stateCl = false;
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cBSender;
	protected:

	protected:

	private: System::Windows::Forms::GroupBox^  gbSend;
	protected:

	private: System::Windows::Forms::GroupBox^  gBConnection;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::TextBox^  tbIP;
	private: System::Windows::Forms::Label^  state;
	private: System::Windows::Forms::NumericUpDown^  nUDPort;
	private: System::Windows::Forms::Button^  btConnect;
	private: System::ComponentModel::IContainer^  components;


	private:
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
			this->components = (gcnew System::ComponentModel::Container());
			this->cBSender = (gcnew System::Windows::Forms::ComboBox());
			this->gbSend = (gcnew System::Windows::Forms::GroupBox());
			this->btSend = (gcnew System::Windows::Forms::Button());
			this->gbPacket = (gcnew System::Windows::Forms::GroupBox());
			this->tbSType = (gcnew System::Windows::Forms::TextBox());
			this->tbSD2 = (gcnew System::Windows::Forms::TextBox());
			this->tbSTaille = (gcnew System::Windows::Forms::TextBox());
			this->tbSD1 = (gcnew System::Windows::Forms::TextBox());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->gbData2 = (gcnew System::Windows::Forms::GroupBox());
			this->IntType2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lData2 = (gcnew System::Windows::Forms::Label());
			this->StringType2 = (gcnew System::Windows::Forms::TextBox());
			this->BoolType2 = (gcnew System::Windows::Forms::CheckBox());
			this->gbData1 = (gcnew System::Windows::Forms::GroupBox());
			this->IntType1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lData = (gcnew System::Windows::Forms::Label());
			this->StringType1 = (gcnew System::Windows::Forms::TextBox());
			this->BoolType1 = (gcnew System::Windows::Forms::CheckBox());
			this->cbSendMsg = (gcnew System::Windows::Forms::ComboBox());
			this->gBConnection = (gcnew System::Windows::Forms::GroupBox());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->tbIP = (gcnew System::Windows::Forms::TextBox());
			this->state = (gcnew System::Windows::Forms::Label());
			this->nUDPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->btConnect = (gcnew System::Windows::Forms::Button());
			this->timerUpdate = (gcnew System::Windows::Forms::Timer(this->components));
			this->tbRD1 = (gcnew System::Windows::Forms::GroupBox());
			this->tbRType = (gcnew System::Windows::Forms::TextBox());
			this->tbRD2 = (gcnew System::Windows::Forms::TextBox());
			this->tbRTaille = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->l10 = (gcnew System::Windows::Forms::Label());
			this->gbReceive = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->l12 = (gcnew System::Windows::Forms::Label());
			this->textR2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->l11 = (gcnew System::Windows::Forms::Label());
			this->textR1 = (gcnew System::Windows::Forms::TextBox());
			this->tBType = (gcnew System::Windows::Forms::TextBox());
			this->gbSend->SuspendLayout();
			this->gbPacket->SuspendLayout();
			this->gbData2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntType2))->BeginInit();
			this->gbData1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntType1))->BeginInit();
			this->gBConnection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDPort))->BeginInit();
			this->tbRD1->SuspendLayout();
			this->gbReceive->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// cBSender
			// 
			this->cBSender->FormattingEnabled = true;
			this->cBSender->Location = System::Drawing::Point(19, 19);
			this->cBSender->Name = L"cBSender";
			this->cBSender->Size = System::Drawing::Size(195, 21);
			this->cBSender->TabIndex = 0;
			this->cBSender->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cBSender_SelectedIndexChanged);
			// 
			// gbSend
			// 
			this->gbSend->Controls->Add(this->btSend);
			this->gbSend->Controls->Add(this->gbPacket);
			this->gbSend->Controls->Add(this->gbData2);
			this->gbSend->Controls->Add(this->gbData1);
			this->gbSend->Controls->Add(this->cbSendMsg);
			this->gbSend->Controls->Add(this->cBSender);
			this->gbSend->Location = System::Drawing::Point(12, 118);
			this->gbSend->Name = L"gbSend";
			this->gbSend->Size = System::Drawing::Size(468, 264);
			this->gbSend->TabIndex = 1;
			this->gbSend->TabStop = false;
			this->gbSend->Text = L"Send";
			// 
			// btSend
			// 
			this->btSend->Location = System::Drawing::Point(374, 78);
			this->btSend->Name = L"btSend";
			this->btSend->Size = System::Drawing::Size(60, 85);
			this->btSend->TabIndex = 12;
			this->btSend->Text = L"Send";
			this->btSend->UseVisualStyleBackColor = true;
			this->btSend->Click += gcnew System::EventHandler(this, &MyForm::btSend_Click);
			// 
			// gbPacket
			// 
			this->gbPacket->Controls->Add(this->tbSType);
			this->gbPacket->Controls->Add(this->tbSD2);
			this->gbPacket->Controls->Add(this->tbSTaille);
			this->gbPacket->Controls->Add(this->tbSD1);
			this->gbPacket->Controls->Add(this->l3);
			this->gbPacket->Controls->Add(this->l4);
			this->gbPacket->Controls->Add(this->l5);
			this->gbPacket->Controls->Add(this->l6);
			this->gbPacket->Location = System::Drawing::Point(9, 175);
			this->gbPacket->Name = L"gbPacket";
			this->gbPacket->Size = System::Drawing::Size(453, 54);
			this->gbPacket->TabIndex = 3;
			this->gbPacket->TabStop = false;
			this->gbPacket->Text = L"Packet";
			// 
			// tbSType
			// 
			this->tbSType->Enabled = false;
			this->tbSType->Location = System::Drawing::Point(52, 28);
			this->tbSType->MaxLength = 2;
			this->tbSType->Name = L"tbSType";
			this->tbSType->ReadOnly = true;
			this->tbSType->Size = System::Drawing::Size(32, 20);
			this->tbSType->TabIndex = 13;
			this->tbSType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbSD2
			// 
			this->tbSD2->Enabled = false;
			this->tbSD2->Location = System::Drawing::Point(269, 28);
			this->tbSD2->MaxLength = 20;
			this->tbSD2->Name = L"tbSD2";
			this->tbSD2->ReadOnly = true;
			this->tbSD2->Size = System::Drawing::Size(170, 20);
			this->tbSD2->TabIndex = 15;
			this->tbSD2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbSTaille
			// 
			this->tbSTaille->Enabled = false;
			this->tbSTaille->Location = System::Drawing::Point(18, 28);
			this->tbSTaille->MaxLength = 4;
			this->tbSTaille->Name = L"tbSTaille";
			this->tbSTaille->ReadOnly = true;
			this->tbSTaille->Size = System::Drawing::Size(28, 20);
			this->tbSTaille->TabIndex = 12;
			this->tbSTaille->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbSD1
			// 
			this->tbSD1->Enabled = false;
			this->tbSD1->Location = System::Drawing::Point(89, 28);
			this->tbSD1->MaxLength = 20;
			this->tbSD1->Name = L"tbSD1";
			this->tbSD1->ReadOnly = true;
			this->tbSD1->Size = System::Drawing::Size(170, 20);
			this->tbSD1->TabIndex = 14;
			this->tbSD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// l3
			// 
			this->l3->AutoSize = true;
			this->l3->Location = System::Drawing::Point(15, 16);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(32, 13);
			this->l3->TabIndex = 16;
			this->l3->Text = L"Taille";
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->Location = System::Drawing::Point(53, 16);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(31, 13);
			this->l4->TabIndex = 17;
			this->l4->Text = L"Type";
			// 
			// l5
			// 
			this->l5->AutoSize = true;
			this->l5->Location = System::Drawing::Point(157, 16);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(39, 13);
			this->l5->TabIndex = 18;
			this->l5->Text = L"Data 1";
			// 
			// l6
			// 
			this->l6->AutoSize = true;
			this->l6->Location = System::Drawing::Point(332, 16);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(39, 13);
			this->l6->TabIndex = 19;
			this->l6->Text = L"Data 2";
			// 
			// gbData2
			// 
			this->gbData2->Controls->Add(this->IntType2);
			this->gbData2->Controls->Add(this->lData2);
			this->gbData2->Controls->Add(this->StringType2);
			this->gbData2->Controls->Add(this->BoolType2);
			this->gbData2->Location = System::Drawing::Point(9, 117);
			this->gbData2->Name = L"gbData2";
			this->gbData2->Size = System::Drawing::Size(345, 52);
			this->gbData2->TabIndex = 11;
			this->gbData2->TabStop = false;
			this->gbData2->Text = L"Data2";
			this->gbData2->Visible = false;
			// 
			// IntType2
			// 
			this->IntType2->Location = System::Drawing::Point(21, 19);
			this->IntType2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->IntType2->Name = L"IntType2";
			this->IntType2->Size = System::Drawing::Size(207, 20);
			this->IntType2->TabIndex = 5;
			this->IntType2->Visible = false;
			// 
			// lData2
			// 
			this->lData2->AutoSize = true;
			this->lData2->Location = System::Drawing::Point(267, 22);
			this->lData2->Name = L"lData2";
			this->lData2->Size = System::Drawing::Size(36, 13);
			this->lData2->TabIndex = 3;
			this->lData2->Text = L"Data2";
			// 
			// StringType2
			// 
			this->StringType2->Location = System::Drawing::Point(26, 19);
			this->StringType2->Name = L"StringType2";
			this->StringType2->Size = System::Drawing::Size(202, 20);
			this->StringType2->TabIndex = 4;
			this->StringType2->Visible = false;
			// 
			// BoolType2
			// 
			this->BoolType2->AutoSize = true;
			this->BoolType2->Location = System::Drawing::Point(78, 22);
			this->BoolType2->Name = L"BoolType2";
			this->BoolType2->Size = System::Drawing::Size(15, 14);
			this->BoolType2->TabIndex = 2;
			this->BoolType2->UseVisualStyleBackColor = true;
			this->BoolType2->Visible = false;
			// 
			// gbData1
			// 
			this->gbData1->Controls->Add(this->IntType1);
			this->gbData1->Controls->Add(this->lData);
			this->gbData1->Controls->Add(this->StringType1);
			this->gbData1->Controls->Add(this->BoolType1);
			this->gbData1->Location = System::Drawing::Point(9, 59);
			this->gbData1->Name = L"gbData1";
			this->gbData1->Size = System::Drawing::Size(345, 52);
			this->gbData1->TabIndex = 10;
			this->gbData1->TabStop = false;
			this->gbData1->Text = L"Data1";
			this->gbData1->Visible = false;
			// 
			// IntType1
			// 
			this->IntType1->Location = System::Drawing::Point(21, 19);
			this->IntType1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->IntType1->Name = L"IntType1";
			this->IntType1->Size = System::Drawing::Size(207, 20);
			this->IntType1->TabIndex = 5;
			this->IntType1->Visible = false;
			// 
			// lData
			// 
			this->lData->AutoSize = true;
			this->lData->Location = System::Drawing::Point(267, 22);
			this->lData->Name = L"lData";
			this->lData->Size = System::Drawing::Size(36, 13);
			this->lData->TabIndex = 3;
			this->lData->Text = L"Data1";
			// 
			// StringType1
			// 
			this->StringType1->Location = System::Drawing::Point(26, 19);
			this->StringType1->MaxLength = 11;
			this->StringType1->Name = L"StringType1";
			this->StringType1->Size = System::Drawing::Size(202, 20);
			this->StringType1->TabIndex = 4;
			this->StringType1->Visible = false;
			// 
			// BoolType1
			// 
			this->BoolType1->AutoSize = true;
			this->BoolType1->Location = System::Drawing::Point(78, 22);
			this->BoolType1->Name = L"BoolType1";
			this->BoolType1->Size = System::Drawing::Size(15, 14);
			this->BoolType1->TabIndex = 2;
			this->BoolType1->UseVisualStyleBackColor = true;
			this->BoolType1->Visible = false;
			// 
			// cbSendMsg
			// 
			this->cbSendMsg->FormattingEnabled = true;
			this->cbSendMsg->Location = System::Drawing::Point(224, 19);
			this->cbSendMsg->Name = L"cbSendMsg";
			this->cbSendMsg->Size = System::Drawing::Size(197, 21);
			this->cbSendMsg->TabIndex = 1;
			this->cbSendMsg->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbSendMsg_SelectedIndexChanged);
			// 
			// gBConnection
			// 
			this->gBConnection->Controls->Add(this->l2);
			this->gBConnection->Controls->Add(this->l1);
			this->gBConnection->Controls->Add(this->tbIP);
			this->gBConnection->Controls->Add(this->state);
			this->gBConnection->Controls->Add(this->nUDPort);
			this->gBConnection->Controls->Add(this->btConnect);
			this->gBConnection->Location = System::Drawing::Point(12, 12);
			this->gBConnection->Name = L"gBConnection";
			this->gBConnection->Size = System::Drawing::Size(468, 100);
			this->gBConnection->TabIndex = 2;
			this->gBConnection->TabStop = false;
			this->gBConnection->Text = L"Connection";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Location = System::Drawing::Point(193, 20);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(26, 13);
			this->l2->TabIndex = 5;
			this->l2->Text = L"Port";
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Location = System::Drawing::Point(72, 20);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(17, 13);
			this->l1->TabIndex = 4;
			this->l1->Text = L"IP";
			// 
			// tbIP
			// 
			this->tbIP->Location = System::Drawing::Point(72, 38);
			this->tbIP->Name = L"tbIP";
			this->tbIP->Size = System::Drawing::Size(100, 20);
			this->tbIP->TabIndex = 3;
			// 
			// state
			// 
			this->state->AutoSize = true;
			this->state->BackColor = System::Drawing::Color::Red;
			this->state->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->state->ForeColor = System::Drawing::Color::White;
			this->state->Location = System::Drawing::Point(15, 38);
			this->state->Name = L"state";
			this->state->Size = System::Drawing::Size(41, 20);
			this->state->TabIndex = 2;
			this->state->Text = L"OFF";
			this->state->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nUDPort
			// 
			this->nUDPort->Location = System::Drawing::Point(193, 38);
			this->nUDPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65525, 0, 0, 0 });
			this->nUDPort->Name = L"nUDPort";
			this->nUDPort->Size = System::Drawing::Size(65, 20);
			this->nUDPort->TabIndex = 1;
			// 
			// btConnect
			// 
			this->btConnect->Location = System::Drawing::Point(279, 38);
			this->btConnect->Name = L"btConnect";
			this->btConnect->Size = System::Drawing::Size(75, 20);
			this->btConnect->TabIndex = 0;
			this->btConnect->Text = L"Connect";
			this->btConnect->UseVisualStyleBackColor = true;
			this->btConnect->Click += gcnew System::EventHandler(this, &MyForm::btConnect_Click);
			// 
			// timerUpdate
			// 
			this->timerUpdate->Enabled = true;
			this->timerUpdate->Interval = 500;
			this->timerUpdate->Tick += gcnew System::EventHandler(this, &MyForm::timerUpdate_Tick);
			// 
			// tbRD1
			// 
			this->tbRD1->Controls->Add(this->tbRType);
			this->tbRD1->Controls->Add(this->tbRD2);
			this->tbRD1->Controls->Add(this->tbRTaille);
			this->tbRD1->Controls->Add(this->textBox4);
			this->tbRD1->Controls->Add(this->l7);
			this->tbRD1->Controls->Add(this->l8);
			this->tbRD1->Controls->Add(this->l9);
			this->tbRD1->Controls->Add(this->l10);
			this->tbRD1->Location = System::Drawing::Point(6, 20);
			this->tbRD1->Name = L"tbRD1";
			this->tbRD1->Size = System::Drawing::Size(453, 54);
			this->tbRD1->TabIndex = 20;
			this->tbRD1->TabStop = false;
			this->tbRD1->Text = L"Packet";
			// 
			// tbRType
			// 
			this->tbRType->Enabled = false;
			this->tbRType->Location = System::Drawing::Point(52, 28);
			this->tbRType->MaxLength = 2;
			this->tbRType->Name = L"tbRType";
			this->tbRType->ReadOnly = true;
			this->tbRType->Size = System::Drawing::Size(32, 20);
			this->tbRType->TabIndex = 13;
			this->tbRType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbRD2
			// 
			this->tbRD2->Enabled = false;
			this->tbRD2->Location = System::Drawing::Point(269, 28);
			this->tbRD2->MaxLength = 20;
			this->tbRD2->Name = L"tbRD2";
			this->tbRD2->ReadOnly = true;
			this->tbRD2->Size = System::Drawing::Size(170, 20);
			this->tbRD2->TabIndex = 15;
			this->tbRD2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbRTaille
			// 
			this->tbRTaille->Enabled = false;
			this->tbRTaille->Location = System::Drawing::Point(18, 28);
			this->tbRTaille->MaxLength = 4;
			this->tbRTaille->Name = L"tbRTaille";
			this->tbRTaille->ReadOnly = true;
			this->tbRTaille->Size = System::Drawing::Size(28, 20);
			this->tbRTaille->TabIndex = 12;
			this->tbRTaille->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(89, 28);
			this->textBox4->MaxLength = 20;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// l7
			// 
			this->l7->AutoSize = true;
			this->l7->Location = System::Drawing::Point(15, 16);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(32, 13);
			this->l7->TabIndex = 16;
			this->l7->Text = L"Taille";
			// 
			// l8
			// 
			this->l8->AutoSize = true;
			this->l8->Location = System::Drawing::Point(53, 16);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(31, 13);
			this->l8->TabIndex = 17;
			this->l8->Text = L"Type";
			// 
			// l9
			// 
			this->l9->AutoSize = true;
			this->l9->Location = System::Drawing::Point(157, 16);
			this->l9->Name = L"l9";
			this->l9->Size = System::Drawing::Size(39, 13);
			this->l9->TabIndex = 18;
			this->l9->Text = L"Data 1";
			// 
			// l10
			// 
			this->l10->AutoSize = true;
			this->l10->Location = System::Drawing::Point(332, 16);
			this->l10->Name = L"l10";
			this->l10->Size = System::Drawing::Size(39, 13);
			this->l10->TabIndex = 19;
			this->l10->Text = L"Data 2";
			// 
			// gbReceive
			// 
			this->gbReceive->Controls->Add(this->groupBox1);
			this->gbReceive->Controls->Add(this->tbRD1);
			this->gbReceive->Location = System::Drawing::Point(486, 12);
			this->gbReceive->Name = L"gbReceive";
			this->gbReceive->Size = System::Drawing::Size(466, 370);
			this->gbReceive->TabIndex = 21;
			this->gbReceive->TabStop = false;
			this->gbReceive->Text = L"Receive";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tBType);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Location = System::Drawing::Point(6, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(453, 264);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->l12);
			this->groupBox2->Controls->Add(this->textR2);
			this->groupBox2->Location = System::Drawing::Point(18, 123);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(345, 52);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Data2";
			// 
			// l12
			// 
			this->l12->AutoSize = true;
			this->l12->Location = System::Drawing::Point(267, 22);
			this->l12->Name = L"l12";
			this->l12->Size = System::Drawing::Size(36, 13);
			this->l12->TabIndex = 3;
			this->l12->Text = L"Data2";
			// 
			// textR2
			// 
			this->textR2->Enabled = false;
			this->textR2->Location = System::Drawing::Point(26, 19);
			this->textR2->Name = L"textR2";
			this->textR2->ReadOnly = true;
			this->textR2->Size = System::Drawing::Size(202, 20);
			this->textR2->TabIndex = 4;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->l11);
			this->groupBox3->Controls->Add(this->textR1);
			this->groupBox3->Location = System::Drawing::Point(18, 65);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(345, 52);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Data1";
			// 
			// l11
			// 
			this->l11->AutoSize = true;
			this->l11->Location = System::Drawing::Point(267, 22);
			this->l11->Name = L"l11";
			this->l11->Size = System::Drawing::Size(36, 13);
			this->l11->TabIndex = 3;
			this->l11->Text = L"Data1";
			// 
			// textR1
			// 
			this->textR1->Enabled = false;
			this->textR1->Location = System::Drawing::Point(26, 19);
			this->textR1->MaxLength = 11;
			this->textR1->Name = L"textR1";
			this->textR1->ReadOnly = true;
			this->textR1->Size = System::Drawing::Size(202, 20);
			this->textR1->TabIndex = 4;
			// 
			// tBType
			// 
			this->tBType->Enabled = false;
			this->tBType->Location = System::Drawing::Point(26, 25);
			this->tBType->MaxLength = 20;
			this->tBType->Name = L"tBType";
			this->tBType->ReadOnly = true;
			this->tBType->Size = System::Drawing::Size(368, 20);
			this->tBType->TabIndex = 20;
			this->tBType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 394);
			this->Controls->Add(this->gbReceive);
			this->Controls->Add(this->gBConnection);
			this->Controls->Add(this->gbSend);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->gbSend->ResumeLayout(false);
			this->gbPacket->ResumeLayout(false);
			this->gbPacket->PerformLayout();
			this->gbData2->ResumeLayout(false);
			this->gbData2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntType2))->EndInit();
			this->gbData1->ResumeLayout(false);
			this->gbData1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntType1))->EndInit();
			this->gBConnection->ResumeLayout(false);
			this->gBConnection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDPort))->EndInit();
			this->tbRD1->ResumeLayout(false);
			this->tbRD1->PerformLayout();
			this->gbReceive->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		stateCl = _cl->Connect(IPAddress::Parse(tbIP->Text), (int)nUDPort->Value);
		_cl->ReceiveMessage += gcnew DelegateReceiveMessage(this, &MyForm::OnReceiveMessage);
		this->rMsg += rMsg += gcnew DelegateReceiveMsg(this, &MyForm::rMessage);
	}
	private: System::Void timerUpdate_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (stateCl)
		{
			state->Text = "ON";
			state->BackColor = Color::Lime;
			gBConnection->Enabled = false;
		}
		else
		{
			state->Text = "OFF";
			state->BackColor = Color::Red;
			gBConnection->Enabled = true;
		}

		if (_TM->Data1 != "")
		{
			gbData1->Visible = true;
			lData->Text = _TM->Data1;

			if (_TM->TypeData1 == "bool")
			{
				BoolType1->Visible = true;
			}
			else
			{
				if (_TM->TypeData1 == "int")
				{
					IntType1->Visible = true;
				}
				else
				{
					if (_TM->TypeData1 == "string")
					{
						StringType1->Visible = true;
					}
				}
			}


			if (_TM->Data2 != "")
			{
				gbData2->Visible = true;
				lData2->Text = _TM->Data2;

				if (_TM->TypeData2 == "bool")
				{
					BoolType2->Visible = true;
				}
				else
				{
					if (_TM->TypeData2 == "int")
					{
						IntType2->Visible = true;
					}
					else
					{
						if (_TM->TypeData2 == "string")
						{
							StringType2->Visible = true;
						}
					}
				}
			}
		}
		
	}
	void OnReceiveMessage(array<unsigned char, 1> ^ e)
		{
		this->Invoke((this->rMsg), e);

		}
	private: System::Void cBSender_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Console::WriteLine("cbSender Change");
		cBSender->SelectedIndex;
		cbSendMsg->Items->Clear();
		for each (TypeMessage^ var in p->GetListTypeMessage())
		{
			if (var->Sender == cBSender->SelectedIndex+1 || var->Sender == 0)
			{
				cbSendMsg->Items->Add(var);
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		cBSender->Items->Add("Serveur");
		cBSender->Items->Add("Balance");
		cBSender->Items->Add("Barrière");
		cBSender->Items->Add("RFID");

	}
	private: System::Void cbSendMsg_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Console::WriteLine("cbSendMsg Change");

		BoolType1->Visible = false;
		BoolType2->Visible = false;
		IntType1->Visible = false;
		IntType2->Visible = false;
		StringType1->Visible = false;
		StringType2->Visible = false;

		TypeMessage^ tTM = (TypeMessage^)cbSendMsg->SelectedItem;
		_TM = tTM;
		
	}
	private: System::Void btSend_Click(System::Object^  sender, System::EventArgs^  e) {

		tbSTaille->Text = "";
		tbSType->Text = "";
		tbSD1->Text = "";
		tbSD2->Text = "";

		array<Byte>^ msg = p->translateByID(_TM->ID, (Boolean)BoolType1->Checked, (String^)StringType1->Text, (int)IntType1->Value);

		ProtocolMsg^ pm = gcnew ProtocolMsg();

		_cl->Send(msg);
		pm = p->translateReceive(msg);

		tbSTaille->Text = Convert::ToString(pm->lenght);
		tbSType->Text = Convert::ToString(pm->type);

		String^d1 = "";
		String^d2 = "";


		if (pm->lenght > 2)
		{
			for each (Byte var in pm->data1)
			{
				Console::Write(var + " ");
				char t;
				t = var;
				d1 += t;
			}
		}


		tbSD1->Text = d1;
		tbSD2->Text = d2;

		
	}
			
	void rMessage(array<unsigned char, 1>^ e)
			 {
				 try
				 {
					 ProtocolMsg^ pm = gcnew ProtocolMsg();
					 pm = p->translateReceive(e);
					 Console::WriteLine(pm->type);
					 TypeMessage^ tm = p->getTypeMessageByID(pm->type);
					 Console::WriteLine(tm->Nom);

					 tbRTaille->Text = Convert::ToString(pm->lenght);
					 tbRType->Text = Convert::ToString(pm->type);
					 String^d1 = "";
					 if (pm->lenght > 2)
					 {
						 for each (Byte var in pm->data1)
						 {
							 Console::Write(var + " ");
							 char t;
							 t = var;
							 d1 += t;
						 }
					 }
					 tbRD1->Text = d1;
					 String^d2 = "";

					 if (pm->lenght>2 + tm->NbBData1)
					 {
						 for each (Byte var in pm->data2)
						 {
							 Console::Write(var + " ");
							 char t;
							 t = var;
							 d2 += t;
						 }
					 }
					 tbRD2->Text = d2;

					 String^nom = tm->Nom;
					 tBType->Text = nom;

					 if (tm->TypeData1 == "bool")
					 {
						 textR1->Text = "";
						 if (pm->data1[0] == '1')
						 {
							 textR1->BackColor = Color::Lime;
						 }
						 else
						 {
							 textR1->BackColor = Color::Red;

						 }

					 }
					 else
					 {
						 String^d1 = "";

						 if (pm->lenght > 2)
						 {
							 for each (Byte var in pm->data1)
							 {
								 Console::Write(var + " ");
								 char t;
								 t = var;
								 d1 += t;
							 }
						 }
						 textR1->BackColor = Color::White;
						 textR1->Text = d1;

					 }

					 if (tm->TypeData2 == "bool")
					 {
						 textR2->Text = "";
						 if (pm->data2[0] == '1')
						 {
							 textR2->BackColor = Color::Lime;
						 }
						 else
						 {
							 textR2->BackColor = Color::Red;

						 }

					 }
					 else
					 {

						 String^d2 = "";

						 if (pm->lenght>2 + tm->NbBData1)
						 {
							 for each (Byte var in pm->data2)
							 {
								 Console::Write(var + " ");
								 char t;
								 t = var;
								 d2 += t;
							 }
						 }
						 textR2->BackColor = Color::White;
						 textR2->Text = d2;


					 }


				 }
				 catch (Exception^ e)
				 {
					 Console::WriteLine(e);
				 }

	}
};







