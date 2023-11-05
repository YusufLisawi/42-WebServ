/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Location.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:51:36 by yelaissa          #+#    #+#             */
/*   Updated: 2023/11/05 22:49:18 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "webserv.hpp"
#include "CommonDirectives.hpp"

class Location : public CommonDirectives
{
private:
    std::string                 path;
    std::string                 redir;
    // CgiInfo                     cgi;
public:
    Location();
    ~Location();

    // Getters
    std::string                 getPath() const;
    std::string                 getRedir() const;

    // Setters
    void                        setPath(const std::string& path);
    void                        setRedir(const std::string& redir);

    // Methods
    void                        print() const;
    void                        fill(std::string const &line, int &lineNb);
};
