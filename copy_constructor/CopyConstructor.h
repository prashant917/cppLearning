#ifndef COPYCONSTRUCTOR_H
#define COPYCONSTRUCTOR_H
	class CopyConstructor {
		private:
			int x;
			int y;
		public:
			CopyConstructor(int _x, int _y);
			CopyConstructor(const CopyConstructor& copy);
			void display();
			~CopyConstructor();
	};
#endif
