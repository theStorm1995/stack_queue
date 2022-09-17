#ifndef CPSC131_PALINDROMEDETECTOR_MYQUEUE_HPP
#define CPSC131_PALINDROMEDETECTOR_MYQUEUE_HPP

// Name: Nathan Storm 
// CWID: 885905158
// Email: nathanstorm95@csu.fullerton.edu

/**
 * TODO: Complete this class declaration
 */


/// Starter includes
#include "MyQueue.hpp"
#include "MyStack.hpp"
//
#include <string>


//
namespace CPSC131::PalindromeDetector
{
	//
	class MyDetector
	{
		//
		public:
			
			///	Your welcome
			MyDetector();
			
			/**
			 * Receive an std::string
			 * 
			 * Return true if the string is a palindrome
			 * Return false otherwise
			 */
			bool isPalindrome(std::string s);
			
		//
		private:
			
			// Helper Methods

			/**
			 * This method will remove spaces from a string 
			 */
			std::string removeSpaces(std::string s);


			/**
			 * This method will remove special characters from a string 
			 */
			std::string removeSpecialChar(std::string s);
			
	};
}









#endif
