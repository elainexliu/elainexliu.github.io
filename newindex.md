<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>elaine liu</title>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Newsreader:ital,opsz,wght@0,6..72,300;0,6..72,400;0,6..72,500;1,6..72,400&family=Grotesk:wght@300;400;500;600&display=swap');
        @import url('https://fonts.googleapis.com/css2?family=DM+Sans:ital,opsz,wght@0,9..40,300;0,9..40,400;0,9..40,500;1,9..40,400&display=swap');
        
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        :root {
            --bg-primary: #fdfffe;
            --bg-secondary: #f9faf9;
            --text-primary: #2c2d2a;
            --text-secondary: #5a6b5d;
            --text-muted: #8a9b8d;
            --accent-sage: #7ea37a;
            --accent-blue-grey: #b4c4d1;
            --highlight-sage: #f0f4f0;
            --highlight-blue: #f3f6f8;
            --border: #e8ede8;
            --border-subtle: #f1f5f1;
        }
        
        body {
            font-family: 'DM Sans', system-ui, sans-serif;
            background: var(--bg-primary);
            color: var(--text-primary);
            line-height: 1.65;
            font-size: 15px;
            -webkit-font-smoothing: antialiased;
            font-weight: 400;
        }
        
        .container {
            max-width: 760px;
            margin: 0 auto;
            padding: 64px 32px 140px;
        }
        
        /* Navigation */
        nav {
            margin-bottom: 88px;
            border-bottom: 1px solid var(--border);
            padding-bottom: 28px;
        }
        
        .nav-content {
            display: flex;
            justify-content: space-between;
            align-items: center;
        }
        
        .logo {
            font-family: 'Newsreader', serif;
            font-weight: 400;
            font-size: 20px;
            color: var(--text-primary);
            text-decoration: none;
            font-style: italic;
        }
        
        .nav-links {
            display: flex;
            gap: 40px;
        }
        
        .nav-links a {
            color: var(--text-secondary);
            text-decoration: none;
            font-size: 15px;
            font-weight: 400;
            transition: color 0.25s ease;
            position: relative;
        }
        
        .nav-links a:hover {
            color: var(--text-primary);
        }
        
        .nav-links a.active {
            color: var(--text-primary);
            font-weight: 500;
        }
        
        .nav-links a.active::after {
            content: '';
            position: absolute;
            bottom: -29px;
            left: 0;
            right: 0;
            height: 2px;
            background: linear-gradient(90deg, var(--accent-sage), var(--accent-blue-grey));
        }
        
        /* Page content */
        .page {
            display: none;
        }
        
        .page.active {
            display: block;
        }
        
        /* Typography */
        h1 {
            font-family: 'Newsreader', serif;
            font-size: 36px;
            font-weight: 400;
            line-height: 1.3;
            margin-bottom: 32px;
            color: var(--text-primary);
        }
        
        h2 {
            font-size: 17px;
            font-weight: 500;
            margin-bottom: 20px;
            color: var(--text-secondary);
            letter-spacing: 0.3px;
        }
        
        p {
            margin-bottom: 20px;
            color: var(--text-primary);
            line-height: 1.7;
        }
        
        .large-text {
            font-family: 'DM Sans', sans-serif;
            font-size: 15px;
            line-height: 1.65;
            margin-bottom: 36px;
            font-weight: 400;
            color: var(--text-secondary);
        }
        
        /* Links */
        a {
            color: var(--text-primary);
            text-decoration: underline;
            text-decoration-color: var(--accent-sage);
            text-underline-offset: 3px;
            text-decoration-thickness: 1px;
            transition: all 0.25s ease;
        }
        
        a:hover {
            text-decoration-color: var(--text-primary);
            color: var(--accent-sage);
        }
        
        /* Highlights */
        .highlight {
            background: var(--highlight-sage);
            padding: 2px 5px;
            border-radius: 3px;
            font-weight: 500;
        }
        
        .highlight.blue {
            background: var(--highlight-blue);
        }
        
        /* Profile photo */
        .intro-with-photo {
            display: flex;
            align-items: flex-start;
            gap: 24px;
            margin-bottom: 36px;
        }
        
        .profile-photo {
            flex-shrink: 0;
            width: 90px;
            height: 90px;
            border-radius: 50%;
            object-fit: cover;
            border: 2px solid var(--border);
            background: var(--border);
            display: flex;
            align-items: center;
            justify-content: center;
            color: var(--text-muted);
            font-size: 12px;
            text-align: center;
            margin-top: 8px;
        }
        
        .intro-text {
            flex: 1;
            min-width: 0;
        }
        
        /* Home page specific */
        .intro {
            margin-bottom: 56px;
        }
        
        .section {
            margin-bottom: 56px;
        }
        
        .section-title {
            font-size: 16px;
            font-weight: 500;
            margin-bottom: 24px;
            color: var(--text-secondary);
            letter-spacing: 0.4px;
        }
        
        /* Lists for me page */
        .bullet-list {
            list-style: none;
            margin-left: 0;
        }
        
        .bullet-list li {
            position: relative;
            padding-left: 24px;
            margin-bottom: 12px;
            line-height: 1.7;
        }
        
        .bullet-list li::before {
            content: '•';
            position: absolute;
            left: 0;
            color: var(--accent-sage);
            font-weight: 500;
            font-size: 16px;
        }
        
        .bullet-list .sub-item {
            color: var(--text-secondary);
            font-size: 14px;
            margin-top: 4px;
            line-height: 1.6;
        }
        
        /* Projects page */
        .projects-intro {
            margin-bottom: 64px;
        }
        
        .project-item {
            display: flex;
            gap: 32px;
            margin-bottom: 56px;
            padding-bottom: 40px;
            border-bottom: 1px solid var(--border-subtle);
            transition: all 0.3s ease;
        }
        
        .project-item:last-child {
            border-bottom: none;
            margin-bottom: 0;
            padding-bottom: 0;
        }
        
        .project-item:hover {
            background: var(--bg-secondary);
            margin-left: -32px;
            margin-right: -32px;
            margin-top: -16px;
            padding-left: 32px;
            padding-right: 32px;
            padding-top: 16px;
            border-radius: 12px;
        }
        
        .project-image {
            flex-shrink: 0;
            width: 160px;
            height: 120px;
            background: var(--border);
            border-radius: 8px;
            display: flex;
            align-items: center;
            justify-content: center;
            color: var(--text-muted);
            font-size: 13px;
            border: 1px solid var(--border);
        }
        
        .project-image img {
            width: 100%;
            height: 100%;
            object-fit: cover;
            border-radius: 7px;
        }
        
        .project-content {
            flex: 1;
            min-width: 0;
        }
        
        .project-meta {
            font-size: 13px;
            color: var(--text-muted);
            margin-bottom: 8px;
            font-weight: 400;
        }
        
        .project-title {
            font-size: 18px;
            font-weight: 500;
            margin-bottom: 12px;
            color: var(--text-primary);
            line-height: 1.4;
        }
        
        .project-description {
            color: var(--text-secondary);
            line-height: 1.65;
            margin-bottom: 16px;
            font-size: 15px;
        }
        
        .project-link {
            font-size: 13px;
            color: var(--text-secondary);
            text-decoration: none;
            border: 1px solid var(--border);
            padding: 8px 16px;
            border-radius: 6px;
            display: inline-block;
            transition: all 0.25s ease;
            font-weight: 400;
        }
        
        .project-link:hover {
            background: var(--highlight-sage);
            border-color: var(--accent-sage);
            color: var(--text-primary);
        }
        
        /* Portfolio section */
        .portfolio-section {
            margin-top: 64px;
            padding-top: 32px;
            border-top: 1px solid var(--border);
        }
        
        .portfolio-links {
            list-style: none;
        }
        
        .portfolio-links li {
            margin-bottom: 16px;
            line-height: 1.6;
        }
        
        .portfolio-links a {
            font-weight: 500;
        }
        
        .portfolio-description {
            color: var(--text-secondary);
            font-size: 14px;
            margin-left: 0;
            margin-top: 4px;
        }
        
        /* Writing page */
        .writing-list {
            list-style: none;
        }
        
        .writing-item {
            margin-bottom: 24px;
            padding: 20px 0;
            border-bottom: 1px solid var(--border-subtle);
            transition: all 0.25s ease;
        }
        
        .writing-item:last-child {
            border-bottom: none;
        }
        
        .writing-item:hover {
            background: var(--bg-secondary);
            margin-left: -32px;
            margin-right: -32px;
            padding-left: 32px;
            padding-right: 32px;
            border-radius: 8px;
        }
        
        .writing-date {
            font-size: 13px;
            color: var(--text-muted);
            margin-bottom: 6px;
            font-weight: 400;
        }
        
        .writing-title {
            font-family: 'Newsreader', serif;
            font-size: 17px;
            color: var(--text-primary);
            text-decoration: none;
            font-weight: 400;
            line-height: 1.5;
        }
        
        .writing-title:hover {
            text-decoration: underline;
            text-decoration-color: var(--accent-sage);
        }
        
        /* Mobile */
        @media (max-width: 640px) {
            .container {
                padding: 48px 20px 100px;
            }
            
            nav {
                margin-bottom: 64px;
            }
            
            .nav-content {
                flex-direction: column;
                gap: 20px;
                align-items: flex-start;
            }
            
            .nav-links {
                gap: 24px;
            }
            
            h1 {
                font-size: 30px;
            }
            
            .large-text {
                font-size: 15px;
            }
            
            .intro-with-photo {
                flex-direction: column;
                align-items: center;
                gap: 20px;
                text-align: center;
            }
            
            .profile-photo {
                margin-top: 0;
            }
            
            .project-item {
                flex-direction: column;
                gap: 20px;
            }
            
            .project-image {
                width: 100%;
                height: 180px;
            }
            
            .project-item:hover {
                margin-left: -20px;
                margin-right: -20px;
                padding-left: 20px;
                padding-right: 20px;
            }
            
            .writing-item:hover {
                margin-left: -20px;
                margin-right: -20px;
                padding-left: 20px;
                padding-right: 20px;
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <nav>
            <div class="nav-content">
                <a href="#" class="logo">elaine liu</a>
                <div class="nav-links">
                    <a href="#" class="nav-link" data-page="projects">projects</a>
                    <a href="#" class="nav-link" data-page="writing">writing</a>
                </div>
            </div>
        </nav>

        <!-- Home Page -->
        <div class="page active" id="home">
            <div class="intro">
                <div class="intro-with-photo">
                    <img src="assets/pics/pfp.jpg" alt="Elaine Liu" class="profile-photo">
                    <div class="intro-text">
                        <p style="font-family: 'Newsreader', serif; font-size: 22px; color: var(--text-primary); margin-bottom: 20px;">hey, i'm elaine!</p>
                        <p>I'm studying <span class="highlight">EECS @ MIT</span> and passionate about doing cool things that make people feel good. Right now, I'm interested in <span class="highlight blue">hardware/circuit design</span> + AI/computer vision for health and consumer tech.</p>
                        <p>I also love sunsets, <a href="https://www.instagram.com/eggshellsandoil/">art</a>, <a href="https://www.youtube.com/@elainexliu">youtube</a>, <a href="https://www.instagram.com/roadkillbuffet/">improv</a>, skateboarding, lifting, political philosophy, and strolling around in libraries.</p>
                    </div>
                </div>
            </div>

            <div class="section">
                <h2 class="section-title">now</h2>
                <ul class="bullet-list">
                    <li>Building consumer products for tics and BFRBs</li>
                    <li>Product at a stealth healthcare startup, working to make paid family caretaking more accessible
                        <div class="sub-item">Backed by Sequoia, Khosla, and Thrive</div>
                    </li>
                    <li>Venture Partner at Contrary</li>
                </ul>
            </div>

            <div class="section">
                <h2 class="section-title">previously</h2>
                <ul class="bullet-list">
                    <li>Conformable drug delivery methods and women's health devices @ Conformable Decoders in the Media Lab</li>
                    <li>GTM strategy, cash burn modeling, and investing for health and consumer tech and BCIs @ Thrive Capital</li>
                    <li>Schemed with Cohort 3.0 Admin @ Prod</li>
                    <li>Vehicle computer vision model optimization @ VIA + explored Taiwan</li>
                    <li>Controlled drug delivery methods + bioMEMS research @ the MIT Koch Institute</li>
                    <li>Fire alarm detection products and IoT data management systems @ Enventys Partners</li>
                    <li>Hereditary cataract prediction with ML research @ UNC Wilmington</li>
                </ul>
            </div>

            <div class="section">
                <ul class="bullet-list">
                    <li><a href="https://fabacademy.org/2020/labs/charlotte/students/elaine-liu/">How to make almost anything</a> @ FabAcademy</li>
                    <li>Engineering for young girls @ sheMakes</li>
                    <li>I've built some things!</li>
                </ul>
            </div>
        </div>

        <!-- Projects Page -->
        <div class="page" id="projects">
            <div class="projects-intro">
                <h1>projects</h1>
                <p class="large-text">I love to build and create things. Here are some of my creative endeavors, ranging from simple projects made for fun to gadgets made to solve daily inconveniences to well-integrated products made to solve real world problems.</p>
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
                        <div class="portfolio-description">20-week professional engineering course taught by MIT professor Neil Gershenfeld</div>
                    </li>
                    <li>
                        <a href="https://github.com/elainexliu">github</a>
                        <div class="portfolio-description">recent builds and explorations</div>
                    </li>
                </ul>
            </div>
        </div>

        <!-- Writing Page -->
        <div class="page" id="writing">
            <h1>writing</h1>
            <p class="large-text">Here are some of my thoughts that made it out of the drafts:</p>
            
            <ul class="writing-list">
                <li class="writing-item">
                    <div class="writing-date">March 2025</div>
                    <a href="#" class="writing-title">The Mom Test Takeaways</a>
                </li>
                <li class="writing-item">
                    <div class="writing-date">February 2025</div>
                    <a href="#" class="writing-title">The loss of play in adulthood</a>
                </li>
                <li class="writing-item">
                    <div class="writing-date">January 2025</div>
                    <a href="#" class="writing-title">Snippets of life</a>
                </li>
                <li class="writing-item">
                    <div class="writing-date">August 2024</div>
                    <a href="#" class="writing-title">A few pieces of advice from One Piece</a>
                </li>
                <li class="writing-item">
                    <div class="writing-date">June 2023</div>
                    <a href="#" class="writing-title">Transcendental Simplicity in a Modern Capitalist America</a>
                </li>
                <li class="writing-item">
                    <div class="writing-date">January 2025</div>
                    <a href="#" class="writing-title">Hello world!</a>
                </li>
            </ul>
        </div>
    </div>

    <script>
        // Simple navigation
        document.addEventListener('DOMContentLoaded', function() {
            const navLinks = document.querySelectorAll('.nav-link');
            const pages = document.querySelectorAll('.page');
            const logo = document.querySelector('.logo');

            // Logo click handler for home page
            logo.addEventListener('click', function(e) {
                e.preventDefault();
                
                // Remove active class from all nav links and pages
                navLinks.forEach(nl => nl.classList.remove('active'));
                pages.forEach(page => page.classList.remove('active'));
                
                // Show home page
                document.getElementById('home').classList.add('active');
            });

            navLinks.forEach(link => {
                link.addEventListener('click', function(e) {
                    e.preventDefault();
                    
                    // Remove active class from all nav links and pages
                    navLinks.forEach(nl => nl.classList.remove('active'));
                    pages.forEach(page => page.classList.remove('active'));
                    
                    // Add active class to clicked nav link
                    this.classList.add('active');
                    
                    // Show corresponding page
                    const targetPage = this.getAttribute('data-page');
                    document.getElementById(targetPage).classList.add('active');
                });
            });
        });
    </script>
</body>
</html>