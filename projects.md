---
layout: page
title: projects
---
<!-- 
{% for tag in site.tags %}
  <h3>{{ tag[0] }}</h3>
  <ul>
    {% for post in tag[1] %}
      <li><a href="{{ post.url }}">{{ post.date | date: "%B %Y" }} - {{ post.title }}</a></li>
    {% endfor %}
  </ul>
{% endfor %} -->

{% for tag in site.tags %}
  {% if tag == "Project" %}
    <h3>{{ tag[0] }}</h3>
    <ul>
      {% for post in tag[1] %}
        <li><a href="{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
      {% endfor %}
    </ul>
{% endfor %}s
