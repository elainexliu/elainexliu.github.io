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
  </div>
  <div class = "fabacademy-digital-portfolio">
    <h3><a href = "http://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">fab academy projects</a></h3>
  </div>
</div>
{: .text-center}

## some of my favorites

<ul>
  {% for project in site.categories.projects %}
    <li><a href = "{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
  {% endfor %}
</ul> 
