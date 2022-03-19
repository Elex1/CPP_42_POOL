#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 72, 45), _target(target)
{
    std::cout << "ShrubberyCreationForm's Default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &num) : Form(num), _target(num._target)
{
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}
std::string ShrubberyCreationForm::gettarget() const
{
	return _target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm's Destructor called" << std::endl;
}
ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &num)
{
    _target = num._target;
    return(*this);
}
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
   	isEligible(executor);

	std::ofstream myFile(gettarget().append("_shrubbery").c_str());
	myFile << "		                                                               &   &&   #                   \n"
		<< "                                                                 .&.#&&&&&&&&&                      \n"
		<< "                (%/.%%,  %          (   && #                   %&&&&&&&&&&&&&&(                     \n"
		<< "                   %%%%%%%%%.%%       &&&&&&&             (& (&&&&&&&&&&&&&&#                       \n"
		<< "         .         %%%%%%%%%%%%% %   &%,&&&&&&% &       #*&&&&&&&&&&&&                              \n"
		<< "    .&&&&&&&&& &&/ *(%%%%%%%%%%%%%% .%,&&&&&&&&&&      (&&&&&&&&&&&&%                               \n"
		<< "   ,&&&&&&&&&&&&&&&&&# %& %%%%%%%%%%%%%.&&&&&&&&& *& &,&&&&&&&&&&&&      %#  %%,                    \n"
		<< "  *&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%&&&&&&&&& .&&&&&&&&&&& %. .%*%%%%%%%%%%%%%%%%(            \n"
		<< "        .*/(#&&&&&&&&&&&&&&&&%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&%%%%#%%%%%%%%%%%%%%%%%#               \n"
		<< "                ./#&&&&&&&&&&&&&%%%%%%%%%%%&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%(                 \n"
		<< "                    #&&&&&&&&&&&&&,%%%%%%%%%&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%&/                      \n"
		<< "                       (&&&&&&&&&&%%%%%%%%%%%%&&&&&&&&%&%%%%%%%%%%%%%%%%   &.&&&   %% *&&           \n"
		<< "                    /     /&&&&&&&&%%%%%%%%%%%&&&&&&&%%%%%%%%%%%%%*  %&#&&&&&&&&&&&&&&&&&&&&&       \n"
		<< "           ########% ##.#   *%&&&&&%%&%%%%%%%%&%&&%&%%%%%%%%%%%%%&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&# \n"
		<< "      %####################,#  ,&&&&%&&%%%%%%%%%&&%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n"
		<< "       ##%/###################%#&&&&&&%%%%%%%%%&%&%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&#  #&/  #&&. #&/  \n"
		<< "                 (%%#############%.(&&%&%%%%%%%%%%%%%%%%%%%%&&&&&&&&&&%(/*.                         \n"
		<< "                        (%##########&&&&%&%%%%%%%%%%%%%%&&&&&&&&((#&##%###  //                      \n"
		<< "                          .%##########&&&%%%%%%%%%%%#&%%&&#&####################%%#,                \n"
		<< "                               /%######%%%%%%%%%%%%%%&&#%############################/              \n"
		<< "                                 ########%%%%%%%%%%%%################. /%##*##/########(            \n"
		<< "                                   .####(((%%%%%%%%#(((%######% *                  % #/             \n"
		<< "                                     #((((((((((((((%#%%*                                           \n"
		<< "                                     #((((((((((((((((   *(%%                                       \n"
		<< "                                 (/  .(((((((((%(((%  /%(*                                          \n"
		<< "                                       #(%%%%((%%%%##                                               \n"
		<< "                                           %%%%%                                                    \n";
	myFile.close();

}

Form* ShrubberyCreationForm::create(std::string target)
{
	return (new ShrubberyCreationForm(target));
}