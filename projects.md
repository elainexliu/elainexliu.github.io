---
layout: page
title: projects
---

I love to build and create things. Here are some of my creative endeavors, ranging from simple projects made for fun to gadgets made to solve daily inconveniences to well-integrated products made to solve real world problems.

## digital portfolios

<div class = "digital-portfolios">
  <p>
  Here are two digital portfolios you can check out to see more in-depth documentation of my work!
  </p>
  <div class = "high-school-digital-portfolio">
    <h3><a href = "https://sites.google.com/charlottelatin.org/elaineliudigitalportfolio/home">high school projects</a></h3>
    <p>This digital portfolio shows my documentation for all the projects I have made for my school engineering classes. check it out for some good fun memories.</p>
  </div>
  <div class = "fabacademy-digital-portfolio">
    <h3><a href = "http://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">fab academy projects</a></h3>
    <p>This portfolio showcases all the work I did for Fab Academy, a 20-week, professional level engineering course taught by MIT professor Neil Gershenfeld. I did it less than a year into my engineering adventure, so it was a firehose, to say the least. Learned so much.</p>
  </div>
</div>

<h2><a href = "https://github.com/elainexliu">my github</a></h2>
I've been building more now that I have more time over the summer! Check out what I've been doing.

## some of my favorites

<ul>
  {% for project in site.categories.projects %}
    <li><a href = "{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
  {% endfor %}
</ul> 
