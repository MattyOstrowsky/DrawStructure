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
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
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
			// Draw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 586);
			this->Controls->Add(this->table);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Draw";
			this->Text = L"Draw";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void table_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
