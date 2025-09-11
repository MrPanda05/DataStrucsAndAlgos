#pragma once
#include "Macros.hpp"

namespace Lists {
	/// <summary>
	/// Dynamic array
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template <typename T>
	class List {
		private:
			float _growthFactor;
			uint _size;
			T* _arr;
		public:
			List();
			~List();
			uint size() { return _size; }
			T at(uint index);
			T front();
			T back();



	};
}