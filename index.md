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
  <div class="home-page" style="width:100%; margin:0 auto;">
    <div class="image-cropper">
      <img src="/assets/pics/headshot.jpg" alt="me" class="profile-pic">
    </div>
    <div class="title">
      <h1>Hey, I'm Elaine!</h1>
    </div>
      <p>I'm an undergrad student at MIT studying EECS from Charlotte, NC.</p>
      <p>I'm passionate about creating tech solutions that uplift people. Specifically, I'm interested in  IoT/embedded systems, AI, and MEMS for social good and health applications. I also think a lot about how ethics and political philosophy guide the way we all think about and navigate technology and entrepreneurship. </p>
    <h2>now</h2>
        <ul>
        <li><p>Scheming and Brewing</p></li>
        <li><p>Researching conformable transdermal drug delivery methods @ Conformable Decoders in the Media Lab</p></li>
        <li><p>Venture Partner at Contrary Capital</p></li>
        </ul>
    <h2>previously</h2>
        <ul>
        <li><p>Schemed at Prod</p></li>
        <li><p>Optimized vehicle computer vision models at VIA + explored Taiwan</p></li>
        <li><p>Controlled drug delivery methods + bioMEMS research at the MIT Koch Institute</p></li>
        <li><p>Made fire alarm detection products and IoT data management systems at Enventys Partners</p></li>
        <li><p>Predicted hereditary cataracts with ML research at UNC Wilmington</p></li>
        <li><p>Learned <a href="https://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">how to make almost anything</a> at FabAcademy</p></li>
        <li><p>Introduced engineering and reframed the field to a new wave of amazing young girls at sheMakes</p></li>
        </ul>
    <h2>some projects</h2>
        <p>I've built some things!</p>
        <ul>
          <li><a href = "https://github.com/elaineliuwang/agora_hackMIT">agora: a speech emotion-recognition decision-making web app</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2020/07/20/navimap.html">navimap: an IoT interactive capacitive touch copper map</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2022/04/15/deng-long.html">deng long: a carbon monoxide sensing lamp</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2021/02/22/stance.html">stance: a posture app</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2020/05/10/solar.html">solar: an exploration of capacitive touch</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2019/11/15/foldable-phone-stand.html">foldable phone stand</a></li>
          <li><a href = "https://elainexliu.github.io/projects/2019/10/28/labyrinth-box.html">labyrinth: a new take on a box</a></li>
          <li><a href = "https://elainexliu.github.io/projects.html">more...</a></li>
        </ul> 
    <h2>for fun</h2>
        <p>In my free time, I'm the biggest fan of sunsets and love to <a href= "https://www.instagram.com/elaineliuart/">oil paint and sketch</a>! Trying to do more digital art too. Also love lifting, going to cafes, and strolling around in libraries.</p>
    <h2>some thoughts</h2>
        <p>I tend to overthink often; writing lets me get some of those thoughts off my mind. Here's my little basement library:</p>
        <ul>
          {% for post in site.categories.posts %}
            <li><a href="{{ post.url }}">{{ post.title }}</a></li>
          {% endfor %}
        </ul>
  </div>
</body>
