
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title></title>
		<link rel="stylesheet" href="layui-v2.5.7/layui/css/layui.css" />
	</head>
	<body>
		<ul class="layui-nav">
			<li class="layui-nav-item">
				<a href="">控制台<span class="layui-badge">9</span></a>
			</li>
			<li class="layui-nav-item">
				<a href="">个人中心<span class="layui-badge-dot"></span></a>
			</li>
			<li class="layui-nav-item">
				<a href=""><img src="//t.cn/RCzsdCq" class="layui-nav-img">我</a>
				<dl class="layui-nav-child">
					<dd><a href="javascript:;">修改信息</a></dd>
					<dd><a href="javascript:;">安全管理</a></dd>
					<dd><a href="javascript:;">退了</a></dd>
				</dl>
			</li>
		</ul>
		<form class="layui-form layui-form-item">
			<div class="layui-form-item">
				<label class="layui-form-label">您的姓名：</label>
				<div class="layui-input-block">
					<input type="text" name="title" required lay-verify="required" placeholder="请输入姓名" autocomplete="off" class="layui-input">
				</div>
			</div>
			<div class="layui-form-item">
				<label class="layui-form-label">您的主页：</label>
				<div class="layui-input-block">
					<input type="text" name="title" required lay-verify="required" placeholder="请输入网址" autocomplete="off" class="layui-input">
				</div>
			</div>
			<div class="layui-form-item">
				<label class="layui-form-label">密码</label>
				<div class="layui-input-inline">
					<input type="password" name="password" required lay-verify="required" placeholder="请输入密码" autocomplete="off" class="layui-input">
				</div>
			</div>
			<div class="layui-input-block">
				<button class="layui-btn" lay-submit lay-filter="formDemo">立即提交</button>
				<button type="reset" class="layui-btn layui-btn-primary">重置</button>
			</div>
			</div>


		</form>
	</body>
</html>
