---
layout: page
title: projects
---

<div class="projects-intro">
    <h1>projects</h1>
    <p class="large-text">I love to build things. Here are some of them, going all the way back.</p>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">May 2025 • Research</div>
        <div class="project-title">EMG Detection: The Long (Analog) Way</div>
        <div class="project-description">Building electromyography detection systems from the ground up, exploring analog signal processing techniques for biomedical applications.</div>
        <a href="/projects/2025/05/14/EMG.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">January 2025 • Consumer Health</div>
        <div class="project-title">miro: a device to stop us at the mirror</div>
        <div class="project-description">Designing interventions for body-focused repetitive behaviors through ambient computing and gentle behavioral nudges.</div>
        <a href="/projects/2025/01/18/miro.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">December 2024 • Team Research</div>
        <div class="project-title">cUSD: a conformable ultrasound device</div>
        <div class="project-description">Developing flexible, wearable ultrasound technology for continuous health monitoring applications.</div>
        <a href="/projects/2024/12/30/cusd.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">October 2024 • Web Application</div>
        <div class="project-title">amber: a gen z lip-picking detection web app</div>
        <div class="project-description">Computer vision application that helps users become aware of and reduce body-focused repetitive behaviors through real-time detection.</div>
        <a href="/projects/2024/10/12/amber.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">July 2020 • IoT</div>
        <div class="project-title">navimap: an IoT interactive capacitive touch world map</div>
        <div class="project-description">Interactive world map using capacitive touch sensors to trigger location-based content and stories.</div>
        <a href="/projects/2020/07/20/navimap.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">April 2022 • Product Design</div>
        <div class="project-title">deng long: a carbon monoxide sensing lamp</div>
        <div class="project-description">Ambient home safety device that provides elegant environmental monitoring through beautiful lighting design.</div>
        <a href="/projects/2022/04/15/deng-long.html" class="project-link">Read more</a>
    </div>
</div>

<div class="project-item">
    <div class="project-image">
        <span>image placeholder</span>
    </div>
    <div class="project-content">
        <div class="project-meta">July 2020 • Team Project</div>
        <div class="project-title">cupcake: an automatic batter dispenser machine</div>
        <div class="project-description">Mechanical engineering project creating precision dispensing systems for consistent baking results.</div>
        <a href="/projects/2020/07/01/cupcake-batter.html" class="project-link">Read more</a>
    </div>
</div>

<div class="portfolio-section">
    <h2 class="section-title">portfolios</h2>
    <ul class="portfolio-links">
        <li>
            <a href="https://sites.google.com/charlottelatin.org/elaineliudigitalportfolio/home">high school projects</a>
            <div class="portfolio-description">documentation of engineering class projects and early explorations</div>
        </li>
        <li>
            <a href="http://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">fab academy projects</a>
            <div class="portfolio-description">20-week version of How to Make (Almost) Anything for professional engineers taught by MIT professor Neil Gershenfeld</div>
        </li>
        <li>
            <a href="https://github.com/elainexliu">github</a>
            <div class="portfolio-description">recent builds and explorations</div>
        </li>
    </ul>
</div>

<div class="section">
    <h2 class="section-title">the archives</h2>
    <ul class="bullet-list">
        {% for project in site.categories.projects %}
            <li><a href="{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
        {% endfor %}
    </ul>
</div> 
