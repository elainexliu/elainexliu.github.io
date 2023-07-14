<!-- ---
#
# By default, content added below the "---" mark will appear in the home page
# between the top bar and the list of recent posts.
# To change the home page layout, edit the _layouts/home.html file.
# See: https://jekyllrb.com/docs/themes/#overriding-theme-defaults
#
layout: home
--- -->


<head>
  <link rel="stylesheet" href="../css/home.css">
</head>
<body>
  <div class="image-cropper">
    <img src="/assets/pics/headshot.jpg" alt="me" class="profile-pic">
  </div>
  <div class="title">
    <h1>Hey, I'm Elaine!</h1>
  </div>
    <p>I'm a second-year undergrad at MIT studying EECS from Charlotte, NC.</p>
    <p>I'm passionate about creating tech solutions that uplift people. Specifically, I'm interested in  IoT/embedded systems, AI, and MEMS for social good and health applications. I also think a lot about how ethics and political philosophy guide the way we all think about and navigate technology and entrepreneurship. </p>
  <h2>now</h2>
      <ul>
      <li><p>Optimizing vehicle computer vision models at VIA + exploring Taiwan</p></li>
      <li><p>Moving things forward at Prod</p></li>
      <li><p>Venture Partner at Contrary Capital</p></li>
      </ul>
  <h2>previously</h2>
      <ul>
      <li><p>Controlled drug delivery methods + bioMEMS research at the MIT Koch Institute</p></li>
      <li><p>Made fire alarm detection products and data management IoT systems at Enventys Partners</p></li>
      <li><p>Predicted hereditary cataracts with ML research at UNC Wilmington</p></li>
      <li><p>Learned <a href="https://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">how to make almost anything</a> at FabAcademy</p></li>
      </ul>
  <h2>some projects</h2>
      <p>I've built some things!
      <ul>
        {% for project in site.categories.projects %}
          <li><a href = "{{ project.url }}">{{ project.date | date: "%B %Y" }} - {{ project.title }}</a></li>
        {% endfor %}
      </ul> 

  <h2>for fun</h2>
      <p>In my free time, I'm the biggest fan of sunsets and love to <a href= "https://www.instagram.com/elaineliuart/">oil paint and sketch</a>! Trying to do more digital art too. Also love lifting, going to cafes, and strolling around in libraries.</p>
  <h2>some thoughts</h2>
      <p>I tend to overthink often; writing lets me get some of those thoughts off my mind. Here's my little basement library:</p>
  <p> </p>
</body>
