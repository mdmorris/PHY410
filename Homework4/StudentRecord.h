class StudentRecord {


	public:
		StudentRecord(std::string lastname = "", std::string firstname = "", float score = 0.);

		~StudentRecord();

		
		void print() const;

		std::string const lastname();
		std::string const firstname();
		float const score() const;

		inline bool operator<(const StudentRecord & right) const {
			return (score() < right.score()) ;
		};

		inline bool operator>(const StudentRecord & right) const {
			return (score() > right.score()) ;
		};

		inline bool operator<=(const StudentRecord & right) const {
			return (score() <= right.score()) ;
		};

		inline bool operator>=(const StudentRecord & right) const {
			return (score() >= right.score()) ;
		};





	private:

		std::string firstname_;
		std::string lastname_;
		float score_;

};


