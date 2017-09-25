# raytracing

Following the book [Ray Tracing In One Weekend][1]

![sample image][2]

# Usage

```bash
git clone <repo>
cmake .
make
src/raytracer > image.ppm
```

The resulting image can be previewed using an image viewer like imagemagick's `display`:

```bash
display image.ppm
```

[1]: http://a.co/dgUibQZ
[2]: img/sample.jpg
