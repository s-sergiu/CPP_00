/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 01:00:25 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/03 01:00:26 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact 
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
	public:
	void createContact();
	bool eraseContact();
	void listContactSummary(int index);
	void getContactInfo();
	bool isEmpty();
	bool exists();
};

#endif
