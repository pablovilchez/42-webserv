#ifndef LOCATION_HPP
# define LOCATION_HPP

#include "libraries.hpp"

class Location
{
	public:
		Location();
		Location(const Location &other);
		Location(const std::string &config);
		Location& operator=(const Location &other);
		~Location();

		void parseConfig(const std::string &config);
		void printData() const;

		bool isAcceptedMethod(const std::string &method) const;
		std::string getLocation() const;
		std::string getRoot() const;
		std::set<std::string> getIndex() const;
		bool getDirectoryListing() const;
		std::map<std::string, std::string> getCgiExtension() const;
		std::map<int, std::string> getReturn() const;
		bool isIndexFile(std::string& fileName) const;
		bool	getRootLocation() const;
		std::string getCgiPath(const std::string &extension) const;

	private:
		std::string							_location;
		std::set<std::string>				_acceptedMethods;
		std::string							_root;
		std::set<std::string>				_index;
		bool								_directoryListing;
		std::map<std::string, std::string>	_cgiExtension;
		std::map<int, std::string>			_return;
		bool								_rootLocation;
};

#endif
