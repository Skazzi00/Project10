#pragma once
namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  name1;


    protected:





















    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::ComboBox^  Education;






    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::ComboBox^  spec1;


    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::ComboBox^  academic_level;




    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::ComboBox^  spec3;

    private: System::Windows::Forms::Label^  label14;
    private: System::Windows::Forms::TextBox^  place_of_study;

    private: System::Windows::Forms::Label^  label15;
    private: System::Windows::Forms::ComboBox^  grade;




    private: System::Windows::Forms::Label^  label17;
    private: System::Windows::Forms::TextBox^  others;


    private: System::Windows::Forms::Button^  button1;







    private: System::Windows::Forms::Label^  label18;
    private: System::Windows::Forms::TextBox^  surname1;

    private: System::Windows::Forms::Label^  label19;
    private: System::Windows::Forms::TextBox^  patr1;

    private: System::Windows::Forms::TextBox^  name2;
    private: System::Windows::Forms::TextBox^  surname2;
    private: System::Windows::Forms::TextBox^  patr2;



    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ComboBox^  study_year;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::ComboBox^  birth_year;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::ComboBox^  recom;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::ComboBox^  scin;

private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::ComboBox^  sostav;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::ComboBox^  dlz;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::ComboBox^  teachers;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::ComboBox^  tov;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ComboBox^  vl;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::ComboBox^  activ;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->name1 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->Education = (gcnew System::Windows::Forms::ComboBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->spec1 = (gcnew System::Windows::Forms::ComboBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->academic_level = (gcnew System::Windows::Forms::ComboBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->spec3 = (gcnew System::Windows::Forms::ComboBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->place_of_study = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->grade = (gcnew System::Windows::Forms::ComboBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->others = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->surname1 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->patr1 = (gcnew System::Windows::Forms::TextBox());
            this->name2 = (gcnew System::Windows::Forms::TextBox());
            this->surname2 = (gcnew System::Windows::Forms::TextBox());
            this->patr2 = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->study_year = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->birth_year = (gcnew System::Windows::Forms::ComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->recom = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->scin = (gcnew System::Windows::Forms::ComboBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->sostav = (gcnew System::Windows::Forms::ComboBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->dlz = (gcnew System::Windows::Forms::ComboBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->teachers = (gcnew System::Windows::Forms::ComboBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->tov = (gcnew System::Windows::Forms::ComboBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->vl = (gcnew System::Windows::Forms::ComboBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->activ = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            //
            // label1
            //
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(50, 34);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(36, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Имя:";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            //
            // name1
            //
            this->name1->Location = System::Drawing::Point(87, 31);
            this->name1->Name = L"name1";
            this->name1->Size = System::Drawing::Size(136, 23);
            this->name1->TabIndex = 1;
            this->name1->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // label8
            //
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(10, 174);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(91, 16);
            this->label8->TabIndex = 0;
            this->label8->Text = L"Образование:";
            //
            // Education
            //
            this->Education->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Education->FormattingEnabled = true;
            this->Education->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"начальное", L"среднее общее", L"среднее полное",
                    L"среднее профессиональное"
            });
            this->Education->Location = System::Drawing::Point(107, 171);
            this->Education->Name = L"Education";
            this->Education->Size = System::Drawing::Size(199, 24);
            this->Education->TabIndex = 8;
            this->Education->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label10
            //
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(18, 365);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(86, 16);
            this->label10->TabIndex = 0;
            this->label10->Text = L"Склонность к";
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
            //
            // spec1
            //
            this->spec1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"к точным", L"к гуманитарным" });
            this->spec1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->spec1->FormattingEnabled = true;
            this->spec1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"точным", L"гуманитарным" });
            this->spec1->Location = System::Drawing::Point(107, 362);
            this->spec1->Name = L"spec1";
            this->spec1->Size = System::Drawing::Size(199, 24);
            this->spec1->TabIndex = 14;
            this->spec1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label11
            //
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(31, 400);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(147, 16);
            this->label11->TabIndex = 0;
            this->label11->Text = L"Уровень успеваемости:";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // academic_level
            //
            this->academic_level->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->academic_level->FormattingEnabled = true;
            this->academic_level->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"Отлично", L"Хорошо", L"Удовлетворительно",
                    L"Неудовлетворительно"
            });
            this->academic_level->Location = System::Drawing::Point(184, 397);
            this->academic_level->Name = L"academic_level";
            this->academic_level->Size = System::Drawing::Size(201, 24);
            this->academic_level->TabIndex = 15;
            this->academic_level->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label13
            //
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(111, 433);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(67, 16);
            this->label13->TabIndex = 0;
            this->label13->Text = L"Воспитан:";
            this->label13->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // spec3
            //
            this->spec3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->spec3->FormattingEnabled = true;
            this->spec3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
            this->spec3->Location = System::Drawing::Point(184, 430);
            this->spec3->Name = L"spec3";
            this->spec3->Size = System::Drawing::Size(201, 24);
            this->spec3->TabIndex = 16;
            this->spec3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label14
            //
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(14, 206);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(87, 16);
            this->label14->TabIndex = 0;
            this->label14->Text = L"Название ОУ:";
            //
            // place_of_study
            //
            this->place_of_study->Location = System::Drawing::Point(105, 203);
            this->place_of_study->Name = L"place_of_study";
            this->place_of_study->Size = System::Drawing::Size(201, 23);
            this->place_of_study->TabIndex = 9;
            this->place_of_study->TextChanged += gcnew System::EventHandler(this, &MyForm::place_of_study_TextChanged);
            //
            // label15
            //
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(53, 272);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(46, 16);
            this->label15->TabIndex = 0;
            this->label15->Text = L"Класс:";
            //
            // grade
            //
            this->grade->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->grade->FormattingEnabled = true;
            this->grade->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"6", L"7", L"8", L"9", L"10", L"11" });
            this->grade->Location = System::Drawing::Point(105, 269);
            this->grade->Name = L"grade";
            this->grade->Size = System::Drawing::Size(37, 24);
            this->grade->TabIndex = 11;
            //
            // label17
            //
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(58, 656);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(105, 16);
            this->label17->TabIndex = 0;
            this->label17->Text = L"Дополнительно:";
            //
            // others
            //
            this->others->Location = System::Drawing::Point(34, 677);
            this->others->Multiline = true;
            this->others->Name = L"others";
            this->others->Size = System::Drawing::Size(388, 73);
            this->others->TabIndex = 23;
            this->others->TextChanged += gcnew System::EventHandler(this, &MyForm::others_TextChanged);
            //
            // button1
            //
            this->button1->Location = System::Drawing::Point(184, 756);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(108, 28);
            this->button1->TabIndex = 24;
            this->button1->Text = L"Cгенерировать";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            //
            // label18
            //
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(20, 66);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(66, 16);
            this->label18->TabIndex = 0;
            this->label18->Text = L"Фамилия:";
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            //
            // surname1
            //
            this->surname1->Location = System::Drawing::Point(87, 63);
            this->surname1->Name = L"surname1";
            this->surname1->Size = System::Drawing::Size(136, 23);
            this->surname1->TabIndex = 3;
            this->surname1->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // label19
            //
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(18, 98);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(68, 16);
            this->label19->TabIndex = 0;
            this->label19->Text = L"Отчество:";
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            //
            // patr1
            //
            this->patr1->Location = System::Drawing::Point(87, 95);
            this->patr1->Name = L"patr1";
            this->patr1->Size = System::Drawing::Size(136, 23);
            this->patr1->TabIndex = 5;
            this->patr1->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // name2
            //
            this->name2->Location = System::Drawing::Point(240, 31);
            this->name2->Name = L"name2";
            this->name2->Size = System::Drawing::Size(136, 23);
            this->name2->TabIndex = 2;
            this->name2->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // surname2
            //
            this->surname2->Location = System::Drawing::Point(240, 63);
            this->surname2->Name = L"surname2";
            this->surname2->Size = System::Drawing::Size(136, 23);
            this->surname2->TabIndex = 4;
            this->surname2->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // patr2
            //
            this->patr2->Location = System::Drawing::Point(240, 95);
            this->patr2->Name = L"patr2";
            this->patr2->Size = System::Drawing::Size(136, 23);
            this->patr2->TabIndex = 6;
            this->patr2->TextChanged += gcnew System::EventHandler(this, &MyForm::fio1_TextChanged);
            //
            // label20
            //
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(237, 10);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(128, 16);
            this->label20->TabIndex = 9;
            this->label20->Text = L"Родительный падеж";
            //
            // label21
            //
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(84, 10);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(137, 16);
            this->label21->TabIndex = 9;
            this->label21->Text = L"Именительный падеж";
            //
            // label22
            //
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(16, 242);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(85, 16);
            this->label22->TabIndex = 0;
            this->label22->Text = L"Обучается с:";
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            //
            // study_year
            //
            this->study_year->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->study_year->ForeColor = System::Drawing::SystemColors::WindowText;
            this->study_year->FormattingEnabled = true;
            this->study_year->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
                L"1980", L"1981", L"1982", L"1983", L"1984", L"1985",
                    L"1986", L"1987", L"1988", L"1989", L"1990", L"1991", L"1992", L"1993", L"1994", L"1995", L"1996", L"1997", L"1998", L"1999",
                    L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013",
                    L"2014", L"2015", L"2016"
            });
            this->study_year->Location = System::Drawing::Point(105, 239);
            this->study_year->Name = L"study_year";
            this->study_year->Size = System::Drawing::Size(60, 24);
            this->study_year->TabIndex = 10;
            this->study_year->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::study_year_SelectedIndexChanged);
            //
            // label2
            //
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(4, 142);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(97, 16);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Год рождения:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            //
            // birth_year
            //
            this->birth_year->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->birth_year->ForeColor = System::Drawing::SystemColors::WindowText;
            this->birth_year->FormattingEnabled = true;
            this->birth_year->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
                L"1980", L"1981", L"1982", L"1983", L"1984", L"1985",
                    L"1986", L"1987", L"1988", L"1989", L"1990", L"1991", L"1992", L"1993", L"1994", L"1995", L"1996", L"1997", L"1998", L"1999",
                    L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013",
                    L"2014", L"2015", L"2016"
            });
            this->birth_year->Location = System::Drawing::Point(107, 139);
            this->birth_year->Name = L"birth_year";
            this->birth_year->Size = System::Drawing::Size(60, 24);
            this->birth_year->TabIndex = 7;
            //
            // label3
            //
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(8, 628);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(191, 16);
            this->label3->TabIndex = 0;
            this->label3->Text = L"За время учебы проявил себя:";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // recom
            //
            this->recom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->recom->FormattingEnabled = true;
            this->recom->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"с положительной стороны", L"с отрицательной стороны" });
            this->recom->Location = System::Drawing::Point(205, 625);
            this->recom->Name = L"recom";
            this->recom->Size = System::Drawing::Size(201, 24);
            this->recom->TabIndex = 22;
            this->recom->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label4
            //
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(46, 598);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(132, 16);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Любимый предметы:";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // scin
            //
            this->scin->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
            this->scin->FormattingEnabled = true;
            this->scin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"с положительной стороны", L"с отрицательной стороны" });
            this->scin->Location = System::Drawing::Point(184, 595);
            this->scin->Name = L"scin";
            this->scin->Size = System::Drawing::Size(201, 24);
            this->scin->TabIndex = 21;
            this->scin->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label5
            //
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(312, 365);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(49, 16);
            this->label5->TabIndex = 11;
            this->label5->Text = L"наукам";
            //
            // label6
            //
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(8, 302);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(93, 16);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Состав семьи:";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // sostav
            //
            this->sostav->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->sostav->FormattingEnabled = true;
            this->sostav->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"полный", L"неполный" });
            this->sostav->Location = System::Drawing::Point(105, 299);
            this->sostav->Name = L"sostav";
            this->sostav->Size = System::Drawing::Size(201, 24);
            this->sostav->TabIndex = 12;
            this->sostav->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label7
            //
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(38, 334);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(63, 16);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Родители";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // dlz
            //
            this->dlz->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"должным", L"не должным" });
            this->dlz->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->dlz->FormattingEnabled = true;
            this->dlz->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"должным образом", L"не должным образом" });
            this->dlz->Location = System::Drawing::Point(105, 331);
            this->dlz->Name = L"dlz";
            this->dlz->Size = System::Drawing::Size(201, 24);
            this->dlz->TabIndex = 13;
            this->dlz->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label12
            //
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(312, 334);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(159, 16);
            this->label12->TabIndex = 12;
            this->label12->Text = L"занимаются воспитанием";
            //
            // label16
            //
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(16, 467);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(167, 16);
            this->label16->TabIndex = 0;
            this->label16->Text = L"Преподователи относятся:";
            this->label16->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // teachers
            //
            this->teachers->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->teachers->FormattingEnabled = true;
            this->teachers->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"с уважением", L"без уважения", L"с негодованием",
                    L"отрицательно", L"предвзято"
            });
            this->teachers->Location = System::Drawing::Point(184, 464);
            this->teachers->Name = L"teachers";
            this->teachers->Size = System::Drawing::Size(201, 24);
            this->teachers->TabIndex = 17;
            this->teachers->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label23
            //
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(45, 500);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(137, 16);
            this->label23->TabIndex = 0;
            this->label23->Text = L"Товарищи относятся:";
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // tov
            //
            this->tov->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->tov->FormattingEnabled = true;
            this->tov->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"с уважением", L"без уважения" });
            this->tov->Location = System::Drawing::Point(184, 497);
            this->tov->Name = L"tov";
            this->tov->Size = System::Drawing::Size(201, 24);
            this->tov->TabIndex = 18;
            this->tov->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label24
            //
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(31, 535);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(150, 16);
            this->label24->TabIndex = 0;
            this->label24->Text = L"Влияние на товарищей:";
            this->label24->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // vl
            //
            this->vl->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"положительное", L"отрцательное" });
            this->vl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->vl->FormattingEnabled = true;
            this->vl->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"положительное", L"отрицательное" });
            this->vl->Location = System::Drawing::Point(184, 532);
            this->vl->Name = L"vl";
            this->vl->Size = System::Drawing::Size(201, 24);
            this->vl->TabIndex = 19;
            this->vl->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // label25
            //
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(5, 568);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(173, 16);
            this->label25->TabIndex = 0;
            this->label25->Text = L"Общественную активность:";
            this->label25->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            //
            // activ
            //
            this->activ->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->activ->FormattingEnabled = true;
            this->activ->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Проявляет", L"Не проявляет" });
            this->activ->Location = System::Drawing::Point(184, 565);
            this->activ->Name = L"activ";
            this->activ->Size = System::Drawing::Size(201, 24);
            this->activ->TabIndex = 20;
            this->activ->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            //
            // MyForm
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->ClientSize = System::Drawing::Size(476, 796);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->birth_year);
            this->Controls->Add(this->study_year);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->others);
            this->Controls->Add(this->grade);
            this->Controls->Add(this->scin);
            this->Controls->Add(this->activ);
            this->Controls->Add(this->recom);
            this->Controls->Add(this->vl);
            this->Controls->Add(this->tov);
            this->Controls->Add(this->teachers);
            this->Controls->Add(this->spec3);
            this->Controls->Add(this->dlz);
            this->Controls->Add(this->sostav);
            this->Controls->Add(this->academic_level);
            this->Controls->Add(this->spec1);
            this->Controls->Add(this->Education);
            this->Controls->Add(this->place_of_study);
            this->Controls->Add(this->patr2);
            this->Controls->Add(this->patr1);
            this->Controls->Add(this->surname2);
            this->Controls->Add(this->name2);
            this->Controls->Add(this->surname1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->name1);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Voenkomat";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void fio1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void place_of_study_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void others_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void study_year_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

    System::String^ path_to_exe = Application::StartupPath + "\\textVoen.doc";
    System::IO::StreamWriter^ fp = System::IO::File::CreateText(path_to_exe);
    fp->WriteLine("                                                           ДЛЯ ВОЕНКОМАТА");
    fp->WriteLine("                             ХАРАКТЕРИСТИКА");
    fp->WriteLine();
    fp->WriteLine();
    fp->WriteLine("На " + surname2->Text + " " + name2->Text + " " + patr2->Text);
    fp->WriteLine(birth_year->Text + " года рождения, образование " + Education->Text);
    fp->WriteLine();
    fp->WriteLine();
    fp->WriteLine("    Характеристика пишется в произвольной форме с изложением следующих вопросов:");
    fp->Write("Кем и где работает (учится), разряд, как выполняет производственные нормы, как учится. ");
    fp->Write("Поведение на производстве (в школе), семье, общественных местах, особенности в поведении, ");
    fp->Write("отношение к товарищам, склонности. Участие и отношение к допризывной военной подготовке, ");
    fp->Write("занятие спортом, каким видом, какой имеет разряд. Имеет ли привод в милицию и по каким ");
    fp->Write("причинам. Состояние здоровья, часто ли болеет, какими заболеваниями, дефекты в физическом ");
    fp->WriteLine("развитии.");
    fp->WriteLine("");
    fp->WriteLine("Характеристика подписывается руководителем предприятия, школы, заверяется печатью");
    fp->WriteLine("");
    fp->WriteLine("                             ТЕКСТ ХАРАКТЕРИСТИКИ");
    fp->WriteLine("");
    fp->WriteLine(surname1->Text + " " + name1->Text + " проходит обучение в " + place_of_study->Text + " с " + study_year->Text + " года по настоящее время.");
    fp->WriteLine("");
    fp->WriteLine("    За время обучения зарекомендовал себя " + recom->Text + ". " + "Средний балл усвоения полученных знаний можно оценивать, как \"" + academic_level->Text + "\". " + "Имеет склонность к " + spec1->Text + " наукам. Особое внимание уделяет таким предметам, как " + scin->Text + ".");
    fp->WriteLine("");
    if(spec3->Text == "Нет")
        fp->Write(" Не воспитан, ");
    else
        fp->Write(" Воспитан, ");
    fp->Write("имеет " + sostav->Text + " состав семьи. Родители " + dlz->Text + " занимаются его воспитанием и развитием. Преподавательский состав относится к данному ученику " + teachers->Text + ". Товарищи относятся " + tov->Text + ". Оказывает " + vl->Text + " влияние на товарищей. " + activ->Text + " активность в общественной работе. ");
    fp->WriteLine(others->Text);
    fp->Close();
}






};
}
