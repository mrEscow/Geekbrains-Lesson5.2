#pragma once

namespace Task {
	//---------------------------------------------------------------------------------
	void foo_1(int arr[], int size) {
		for (int index{ 0 }; index < size; ++index) 
			arr[index] = !arr[index];
		
	}
	//---------------------------------------------------------------------------------
	void foo_2(int arrX[], int size) {
		for (int index{ 0 }; index < size; ++index) {
			if (index == 0) arrX[index] = 1;
			else arrX[index] = arrX[index - 1] + 3;
		}
	}
	//---------------------------------------------------------------------------------
	bool foo_3(int arr[], int size) {
		int tmp1 = 0;
		int pass_counter = 0;
		for (int i = 0; i < size - 1; i++)
		{
			pass_counter++;
			tmp1 += arr[i];

			int tmp2 = 0;
			for (int j = pass_counter; j < size; j++)
				tmp2 += arr[j];

			if (tmp1 == tmp2)
			{
				return true;
			}
		}

		return false;
	}
	//---------------------------------------------------------------------------------
	void foo_4(int arr[], int size, int n) {

		if (n < 0) {
			for (int j = n; j < 0; ++j) {

				int tmp = arr[0];
				for (int i = 0; i < size - 1; ++i) arr[i] = arr[i + 1];
				arr[size - 1] = tmp;
			}
		}
		if (n > 0) {
			for (int j = 0; j < n; ++j) {

				int tmp = arr[size - 1];
				for (int i = size - 1; i > 0; --i) arr[i] = arr[i - 1];
				arr[0] = tmp;
			}
		}
	}
}
	

