﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateStreamingDistributionResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API UpdateStreamingDistribution2019_03_26Result
  {
  public:
    UpdateStreamingDistribution2019_03_26Result();
    UpdateStreamingDistribution2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateStreamingDistribution2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The streaming distribution's information.</p>
     */
    inline const StreamingDistribution& GetStreamingDistribution() const{ return m_streamingDistribution; }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline void SetStreamingDistribution(const StreamingDistribution& value) { m_streamingDistribution = value; }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline void SetStreamingDistribution(StreamingDistribution&& value) { m_streamingDistribution = std::move(value); }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline UpdateStreamingDistribution2019_03_26Result& WithStreamingDistribution(const StreamingDistribution& value) { SetStreamingDistribution(value); return *this;}

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline UpdateStreamingDistribution2019_03_26Result& WithStreamingDistribution(StreamingDistribution&& value) { SetStreamingDistribution(std::move(value)); return *this;}


    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateStreamingDistribution2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateStreamingDistribution2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateStreamingDistribution2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    StreamingDistribution m_streamingDistribution;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
