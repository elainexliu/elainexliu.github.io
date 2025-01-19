---
layout: page
title: projects
---

# projects

I love to build and create things. Here are some of my creative endeavors, ranging from simple projects made for fun to gadgets made to solve daily inconveniences to well-integrated products made to solve real world problems.

### some favorites I've worked on!

- [cUSD: a conformable ultrasound device (team research)](https://elainexliu.github.io/projects/2024/12/30/cusd.html)
- [amber: a gen z lip-picking detection web app](https://elainexliu.github.io/projects/2024/10/12/amber.html)
- [navimap: an IoT interactive capacitive touch world map](https://elainexliu.github.io/projects/2020/07/20/navimap.html)
- [deng long: a carbon monoxide sensing lamp](https://elainexliu.github.io/projects/2022/04/15/deng-long.html)
- [cupcake: an automatic batter dispenser machine (team project)](https://elainexliu.github.io/projects/2020/07/01/cupcake-batter.html)

## digital portfolios

<div class = "digital-portfolios">
  <p>
  Here are two digital portfolios you can check out to see more in-depth documentation of my work!
  </p>
  <div class = "high-school-digital-portfolio">
    <h4><a href = "https://sites.google.com/charlottelatin.org/elaineliudigitalportfolio/home">high school projects</a></h4>
    <p>This digital portfolio shows my documentation for all the projects I have made for my school engineering classes. check it out for some good fun memories.</p>
  </div>
  <div class = "fabacademy-digital-portfolio">
    <h4><a href = "http://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">fab academy projects</a></h4>
    <p>This portfolio showcases all the work I did for Fab Academy, a 20-week, professional level engineering course taught by MIT professor Neil Gershenfeld. I did it less than a year into my engineering adventure, so it was a firehose, to say the least. Learned so much.</p>
  </div>
  <div class = "github">
    <h4><a href = "https://github.com/elainexliu">my github</a></h4>
      <p>I've been building more now that I have more time over the summer! Check out what I've been doing.</p>
  </div>
</div>

## the archives

<ul>
  {% for project in site.categories.projects %}
    <li><a href = "{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
  {% endfor %}
</ul> 
