//header

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class contact
{
	private:

		std::string	fields[11]; 
		int			init;

	public:
		bool	is_init(void);
		contact(void);
		void	add(void);
		void	show_four(int index);
		void	show_all(void);
};

#endif
