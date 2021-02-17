//header

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class contact
{
	public:

		std::string fields[11]; 
		int		init;
		contact(void); // how the fuck do you check if this contact exists
		void	add(void);
		//void	search(void);
		//void	show_four(void);
		//void	show_all(int index);
};
#endif
