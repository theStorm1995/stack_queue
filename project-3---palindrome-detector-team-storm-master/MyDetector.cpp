// Name: Nathan Storm 
// CWID: 885905158
// Email: nathanstorm95@csu.fullerton.edu

/**
 * TODO: Complete these class definitions
 */

/// Starter includes
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"
#include <iostream>

//
namespace CPSC131::PalindromeDetector
{
	/// Your welcome
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		// Create a queue and stack instance 
		CPSC131::MyStack<char> stack_reverse;
		CPSC131::MyQueue<char> queue_forward;

		//
		s = this->removeSpaces(s);
		s = this->removeSpecialChar(s);
		
		// Fill stack and queue with our String
 		for(auto itr : s) {
			itr = tolower(itr);
			stack_reverse.push(itr);
			queue_forward.enqueue(itr);
		} 
		
		// Check if stack and queue are equal
		while(queue_forward.size() > 0) {
			if(stack_reverse.top() != queue_forward.front()) {
				return false;
			}
			stack_reverse.pop();
			queue_forward.dequeue();
		}
		return true; 
	}

	//
	std::string MyDetector::removeSpaces(std::string s) {
		//
		std::string string_wo_space;

		// If a char is not a space then push it into a new string
 		for(auto itr : s) {
			//
			if(itr != ' ') {
				string_wo_space.push_back(itr);
			}
		}
		return string_wo_space; 
	}

	//
	std::string MyDetector::removeSpecialChar(std::string s) {
		//
		std::string string_wo_specchar;

		// If a char is not a special char then push it into new string
		for(auto itr : s) {
			if((itr >= 'a' && itr <= 'z') || (itr >= 'A' && itr <= 'Z')) {
				string_wo_specchar.push_back(itr);
			}
		}
		return string_wo_specchar;
	}
}












