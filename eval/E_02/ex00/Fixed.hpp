#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	private:
		int	raw_bits;
		static const int	fractional_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(Fixed& other);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
