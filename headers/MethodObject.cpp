namespace System
{
	class MethodObject : public Object
	{
		public:
		
			/// @brief constructor taking no param
			MethodObject() { };
			
			Object self;
			operator==(){};
			operator!=(){};
	}
}