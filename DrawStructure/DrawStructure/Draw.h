#pragma once

namespace DrawStructure {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Draw
	/// </summary>
	public ref class Draw : public System::Windows::Forms::Form
	{
	public:
		Draw(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktor
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Draw()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::DataGridView^  table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_material;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_width;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_length;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_conductivity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  t_thermal;
	private: System::Windows::Forms::Button^  add_row;
	private: System::Windows::Forms::Button^  remove_row;


	private: System::Windows::Forms::NumericUpDown^  select_row;
	private: System::Windows::Forms::Button^  add_end;







	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->t_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_material = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_width = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_length = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_conductivity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t_thermal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_row = (gcnew System::Windows::Forms::Button());
			this->remove_row = (gcnew System::Windows::Forms::Button());
			this->select_row = (gcnew System::Windows::Forms::NumericUpDown());
			this->add_end = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->select_row))->BeginInit();
			this->SuspendLayout();
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1173, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// table
			// 
			this->table->AllowUserToOrderColumns = true;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->t_name, this->t_material,
					this->t_position, this->t_width, this->t_length, this->t_conductivity, this->t_thermal
			});
			this->table->Location = System::Drawing::Point(12, 44);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(793, 305);
			this->table->TabIndex = 0;
			this->table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Draw::table_CellContentClick);
			// 
			// t_name
			// 
			this->t_name->HeaderText = L"Name";
			this->t_name->Name = L"t_name";
			this->t_name->Width = 125;
			// 
			// t_material
			// 
			this->t_material->HeaderText = L"Type of material";
			this->t_material->Name = L"t_material";
			this->t_material->Width = 125;
			// 
			// t_position
			// 
			this->t_position->HeaderText = L"Position";
			this->t_position->Name = L"t_position";
			// 
			// t_width
			// 
			this->t_width->HeaderText = L"Width";
			this->t_width->Name = L"t_width";
			// 
			// t_length
			// 
			this->t_length->HeaderText = L"Length";
			this->t_length->Name = L"t_length";
			// 
			// t_conductivity
			// 
			this->t_conductivity->HeaderText = L"Conductivity";
			this->t_conductivity->Name = L"t_conductivity";
			// 
			// t_thermal
			// 
			this->t_thermal->HeaderText = L"Thermal conductivity";
			this->t_thermal->Name = L"t_thermal";
			// 
			// add_row
			// 
			this->add_row->Location = System::Drawing::Point(30, 392);
			this->add_row->Name = L"add_row";
			this->add_row->Size = System::Drawing::Size(75, 23);
			this->add_row->TabIndex = 2;
			this->add_row->Text = L"dodaj";
			this->add_row->UseVisualStyleBackColor = true;
			this->add_row->Click += gcnew System::EventHandler(this, &Draw::add_row_Click);
			// 
			// remove_row
			// 
			this->remove_row->Location = System::Drawing::Point(111, 392);
			this->remove_row->Name = L"remove_row";
			this->remove_row->Size = System::Drawing::Size(75, 23);
			this->remove_row->TabIndex = 3;
			this->remove_row->Text = L"usuñ";
			this->remove_row->UseVisualStyleBackColor = true;
			this->remove_row->Click += gcnew System::EventHandler(this, &Draw::remove_row_Click);
			// 
			// select_row
			// 
			this->select_row->Location = System::Drawing::Point(50, 366);
			this->select_row->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->select_row->Name = L"select_row";
			this->select_row->Size = System::Drawing::Size(120, 20);
			this->select_row->TabIndex = 5;
			this->select_row->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// add_end
			// 
			this->add_end->Location = System::Drawing::Point(30, 422);
			this->add_end->Name = L"add_end";
			this->add_end->Size = System::Drawing::Size(156, 23);
			this->add_end->TabIndex = 6;
			this->add_end->Text = L"dodaj na koniec";
			this->add_end->UseVisualStyleBackColor = true;
			this->add_end->Click += gcnew System::EventHandler(this, &Draw::add_end_Click);
			// 
			// Draw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 586);
			this->Controls->Add(this->add_end);
			this->Controls->Add(this->select_row);
			this->Controls->Add(this->remove_row);
			this->Controls->Add(this->add_row);
			this->Controls->Add(this->table);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Draw";
			this->Text = L"Draw";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->select_row))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void table_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void add_row_Click(System::Object^  sender, System::EventArgs^  e) {
	int x1 = Int32::Parse(select_row->Text) - 1;
	table->Rows->Insert(x1, 1);
}
private: System::Void remove_row_Click(System::Object^  sender, System::EventArgs^  e) {
	int x1 = Int32::Parse(select_row->Text) - 1;
	table->Rows->RemoveAt(x1);
}
private: System::Void add_end_Click(System::Object^  sender, System::EventArgs^  e) {
	int x = table->RowCount;
	table->Rows->Add();
}
};
}
