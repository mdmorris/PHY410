class StudentRecord {


	public:
		StudentRecord(std::string lastname = "", std::string firstname = "", float score = 0.);

		~StudentRecord();

		
		void print() const;

		std::string lastname();
		std::string firstname();
		float score();

	
	private:

		std::string firstname_;
		std::string lastname_;
		float score_;

};


