#pragma once

namespace MSS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EEForm
	/// </summary>
	public ref class EEForm : public System::Windows::Forms::Form
	{
	public:
		System::Media::SoundPlayer^ SoundPlayer;
		EEForm(void)
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
		~EEForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EEForm::typeid));
			this->SuspendLayout();
			// 
			// EEForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(472, 368);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EEForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поздравляем! Вы нашли это!";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EEForm::EEForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &EEForm::EEForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EEForm_Load(System::Object^  sender, System::EventArgs^  e) {
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EEForm::typeid));
		SoundPlayer = gcnew System::Media::SoundPlayer();
		SoundPlayer->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"ee"));
		SoundPlayer->Play();
	}
	private: System::Void EEForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		SoundPlayer->Stop();
	}
	};
}
