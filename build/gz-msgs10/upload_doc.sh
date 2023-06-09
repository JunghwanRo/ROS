#!/bin/sh

echo "Usage: sh upload_doc.sh [y/n]"
echo "  Optional [y/n] argument indicates whether to upload the docs to S3 automatically."

# Make documentation if not build
if [ ! -f "/home/julia/workspace/build/gz-msgs10/doxygen/html/index.html" ]; then
  make doc
  if [ ! -f "/home/julia/workspace/build/gz-msgs10/doxygen/html/index.html" ]; then
    echo "Documentation not present. Install doxygen, and run `make doc` in the build directory"
    exit 1
  fi
fi

# Dry run
aws s3 sync --dryrun /home/julia/workspace/build/gz-msgs10/doxygen/html/ s3://gazebosim.org/api/msgs/10/

if [ -z "$1" ]; then
  echo -n "Upload (Y/n)? "
  read ans
else
  ans=$1
fi

if [ "$ans" = "n" ] || [ "$ans" = "N" ]; then
  exit 1
else
  aws s3 sync /home/julia/workspace/build/gz-msgs10/doxygen/html/ s3://gazebosim.org/api/msgs/10/

  echo "WARNING"
  echo "  A CloudFront invalidation is required. Run the following command with the appropriate \$CLOUDFRONT_DISTRIBUTION_ID:\n"
  echo "  aws cloudfront create-invalidation --distribution-id \$CLOUDFRONT_DISTRIBUTION_ID --paths '/*'"
fi
